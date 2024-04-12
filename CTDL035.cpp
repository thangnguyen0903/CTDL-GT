#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll L,R;
		cin>>L>>R;
		for(int k=40;k>=0;k--){
			ll l=0,r=(ll)(pow(R,1.0/k)+10);
			while(l<r){
				ll z=1;
				ll m=(l+r)/2;
				for(int i=0;i<k;i++){
					z*=m;
					if(z>=L) break;
				}
				if(z>=L) r=m;
				else{
					l=m+1;
				}
			}
			ll z=1;
			for(int i=0;i<k;i++){
				z*=l;
				if(z>R) break;
			}
			if(L<=z&&z<=R){
				cout<<k<<"\n";
				break;
			}
		}
	}
}
