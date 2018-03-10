#include<bits/stdc++.h>
using namespace std;
int mem[100];
int a[2000];

int dp(int n,int t){
	if(n==0 && t==0)
		return 0;
	if(t!=0 && n==0)
		return 0;
	if(t==0)
		return 1;
	if(mem[t]!=-1)
		return mem[t];
	return mem[t]=max(dp(n-1,t),dp(n-1,t-a[n]));
}


int main(){
	int t,n  ;
	cout<<"Enter number of element :";
	cin>>n;
	cout<<"Enter the value of required sum :";
	cin>>t;
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	memset(mem,-1,sizeof(mem));
	int ans=dp(n,t);
	if(ans==1)
		cout<<"sum found";
	else 
		cout<<"sum not found";
	return 0;
}


