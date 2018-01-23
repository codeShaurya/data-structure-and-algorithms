#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n<=1)
		return 1;
	return n*fact(n-1);	
}

int main(){
	int n,w;
	cout<<"Enter number of matches to win:";
	cin>>n;
	w=(n+1)/2;
	int ans= fact(n)/(fact(w)*fact(n-w));
	cout<<ans;
	return 0;
}