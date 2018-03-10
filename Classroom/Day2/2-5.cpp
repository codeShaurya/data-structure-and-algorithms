#include<bits/stdc++.h>
using namespace std;
int mem[100][100];
int a[200][200];

int dp(int i,int j){
	if(i==0||j==0)
		return 0;
	
	if(mem[i][j]!=0)
		return mem[i][j];
	if(a[i][j]==1)
		return mem[i][j]=1+dp(i,j-1);
	if(a[i][j]==0)
		return mem[i][j]=dp(i,j-1);
}


int main(){
	int n,t  ;
	cout<<"Enter matrix size ";
	cin>>n;
	cout<<"Enter the element"<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			mem[i][j]=0;
		}
	}

	mem[n][n]=0;

	for(int i=1;i<=n;i++){	
		int ans = dp(i,n);
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+mem[i][n];
	}
	cout<<sum<<endl;
	return 0;
}


