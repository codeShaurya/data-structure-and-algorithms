#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,w;
	cout<<"Enter degree of polynomial  ";
	cin>>n;
	int x0;
	cout<<"Enter the value at which you want the value of function ";
	cin>>x0;
	cout<<"Enter coefficient a,b,c ..... n of polynomoal"<<endl<<"(starting from higher degree) :";
	int a[n+2],b[n+2];
	for(int i=n;i>=0;i--)
		cin>>a[i];
	b[n+1]=0;
	for(int i=n;i>=0;i--){
		b[i]=a[i]+b[i+1]*x0;	
	}
	cout<<"value of funcntion at "<<x0<<" is "<<b[0];
	return 0;
}