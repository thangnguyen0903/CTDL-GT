#include <iostream> // Thu vi?n h? tr? nh?p xu?t
using namespace std;

const int MOD=1e9+7; // Ð?nh nghia h?ng s? "MOD"
int s[15], a[15], z[15], ans=MOD, mx, b[15]; // Khai báo các m?ng và bi?n

// Hàm th? t?t c? các tru?ng h?p xoay kh?i l?p phuong
void Try(int k){
  int num=0;
  while(k){
    int x=k&1, ok=1;
    for(int i=1; i<=6; ++i) if(s[i]!=a[i]){ok=0; break;} // Ki?m tra xem kh?i l?p phuong dã dúng chua
    if(ok) {ans=min(ans,num); break;} // N?u dúng thì c?p nh?t k?t qu?
    num++;
    k>>=1;
    for(int i=1; i<=6; ++i) z[i]=s[i]; // Sao chép kh?i l?p phuong hi?n t?i
    if(!x){ // Xoay kh?i l?p phuong theo tr?c x
      s[1]=z[4], s[2]=z[1], s[4]=z[5], s[5]=z[2];
    }
    else{ // Xoay kh?i l?p phuong theo tr?c y
      s[2]=z[5], s[3]=z[2], s[5]=z[6], s[6]=z[3];
    }
  }
}

int main()
{
    ios_base::sync_with_stdio(false); // Tang t?c d? nh?p xu?t d? li?u
    cin.tie(0); // Gi?i phóng liên k?t gi?a cin và cout
    cout.tie(0); // Gi?i phóng liên k?t gi?a cin và cout

    for(int i=1; i<=6; ++i) cin >> s[i], b[i]=s[i]; // Nh?p kh?i l?p phuong ban d?u
    for(int i=1; i<=6; ++i) cin >> a[i]; // Nh?p kh?i l?p phuong c?n d?t du?c
    mx=1<<20; // Ð?t gi?i h?n cho s? l?n xoay
    for(int j=0; j<=mx; ++j){ // Th? t?t c? các tru?ng h?p xoay
        for(int i=1; i<=6; ++i) s[i]=b[i]; // Khôi ph?c l?i kh?i l?p phuong ban d?u
        Try(j); // Th? xoay kh?i l?p phuong
    }
    cout << ans; // Xu?t k?t qu?

   return 0; // K?t thúc chuong trình
}
