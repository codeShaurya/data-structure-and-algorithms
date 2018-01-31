#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n,count=0;
	cout<<"Enter the number : ";
	cin>>n;

	while( n ){
		n = n & (n - 1);
		count ++;
	}

	cout<<count;
	return 0;
}