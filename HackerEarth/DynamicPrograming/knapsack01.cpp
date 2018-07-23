#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int wt[100];
int v[100];
int mem[100][100];

int dp(int n,int w){
	if(w==0)
		return 0;
	if(n==0)
		return 0;
	if(mem[n][w]!=-1)
		return mem[n][w];
	return mem[n][w]=max(dp(n-1,w),v[n]+dp(n-1,w-wt[n]));
}

int main(){

	int w,n;
	cin>>w>>n;
	memset(mem,-1,sizeof(mem));
	for (int i = 0; i < n; ++i)
		cin>>wt[i]>>v[i];

	int ans=dp(n,w);
	cout<<ans;
	return 0;
}