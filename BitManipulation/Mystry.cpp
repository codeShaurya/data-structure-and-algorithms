#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,count;
	while(cin>>n){
		count=0;
		while( n ){
			n = n & (n - 1);
			count ++;
		}

		cout<<count<<endl;
	}
	return 0;
}

/**
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/mystery-30/

*/