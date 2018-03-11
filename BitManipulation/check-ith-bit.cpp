#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n,m,i;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter position of ith bits :";
	cin>>i;
	m=1<<i;
	if(n & m)
		cout<<"set bit";
	else 
		cout<<"unset bit";

	return 0;
}