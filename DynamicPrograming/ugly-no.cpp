#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll a[100000];

int main(){
	ll n,t;
	cin>>t;
	ll nex2, nex3, nex5;
	ll i2, i3, i5;
	i2 = i3 = i5 = 1;
	ll ugli;
	a[1] = 1;

	for (int i = 2; i < 510; ++i){

		nex2 = a[i2]*2;
		nex3 = a[i3]*3;
		nex5 = a[i5]*5;

		ugli = min(nex5,min(nex3,nex2));
		a[i] = ugli;

		if( ugli == nex2 ){
			i2++;

		}
		if( ugli == nex3 ){
			i3++;
		}
		if( ugli == nex5 ){
			i5++;
		}
	}
	while(t--){
		cin>>n;
		cout<<a[n]<<endl;
	}

	return 0;
}