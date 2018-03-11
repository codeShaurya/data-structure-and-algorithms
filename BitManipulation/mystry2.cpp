#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,count,m,j;
	while(cin>>n){
		j=1;
		m=1;
		count = 0;
		if(n == 0)
			cout<<0<<endl;
		else{
			while( (n & m) == 0 ){
				m=1<<j;
				j++;
			}
			j--;
			ll ans =1<<j;
			cout<<ans<<endl;
		}
	}
	return 0;
}

/**
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-31/description/
*/ 