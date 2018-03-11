#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll s=1,i=0;
		while(n & s){
			s=s<<1;
			i++;
		}
		ll temp = 1<<i;
		ll ans= temp+n;
		cout<<ans<<endl;
	}
	
	return 0;
}


/**
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/hihi-and-crazy-bits/
*/