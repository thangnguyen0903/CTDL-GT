#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int &x:a)cin>>x;
        vector<int>v(n+1,1);
        for(int i=0;i<n;i++){
          for(int j=0;j<i;j++){
            if(a[i]>a[j]){
              v[i]=max(v[i],1+v[j]);
            }
          }
        }
        cout<<*max_element(v.begin(),v.end())<<endl;

    }
    return 0;
}
