#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n;
	cout<<"Enter the number : ";
	cin>>n;
	if(( !n || (n & n-1))==0)
		cout<<n<<" is a Power of 2";
	else 
		cout<<n<<" is Not a power of 2";

	return 0;
}