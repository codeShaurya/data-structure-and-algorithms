#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n,count;
	ll t;
	cin>>t;
	while(t--){
		count=0;
		cin>>n;

		while( n ){
			n = n & (n - 1);
			count ++;
		}

		cout<<count<<endl;
	}
	return 0;
}