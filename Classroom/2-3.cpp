#include<bits/stdc++.h>
using namespace std;
int mem[100];
int a[2000];

int gcd(int a,int b){
	if(a%b==0)
		return b;
	if(b%a==0)
		return a;
	if(a>b)
		return gcd(a%b,b);
	if(a<b)
		return gcd(a,b%a);
}

void rotation(int t,int n){
	int l=gcd(t,n);
	for(int i=0;i<l;i++){
		int temp=a[i];
		int j=i;
		while(1){
			int k=j+t;
			if(k>=n)
				k=k-n;
			if(k==i)
				break;
			a[j]=a[k];
			j=k;
		}
		a[j]=temp;
	}
}


int main(){
	int n,t  ;
	cout<<"Enter number of element and no of rotation ";
	cin>>n>>t;
	cout<<"Enter the n numbers ";
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}

	rotation(t,n);
	cout<<"Array after "<<t<<" rotation  is "<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}


