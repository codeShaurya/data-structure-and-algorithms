#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n;
	cout<<"Enter the no.";
	cin>>n;
	
	n=n|(n>>1);
	n=n|(n>>2);
	n=n|(n>>4);
	n=n|(n>>8);
	n=(n+1)>>1;
	cout<<"The larget no that is the power of 2 but not exceeding "<<n<<" is :";
	cout<<n;

	return 0;
}