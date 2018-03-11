#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define m 1000000007

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t,n,sum;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		for (ll i = 1; i <= n; i *=2){
			for (ll j = 1; j < i; j*=2){
				if(i+j<=n)
					sum +=i+j;
				sum =sum%m;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

/**
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/escape-the-night/description/
*/