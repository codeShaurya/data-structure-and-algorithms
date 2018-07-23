#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[109];
bool mem[50001][101];

bool dp(int sum,int n){

	if(sum%2!=0)
		return false;

	for (int i = 0; i <= n; ++i)
		mem[0][i]=true;

	for (int i = 1; i <= sum/2; ++i)
		mem[i][0]=false;

	for (int i = 1; i <= sum/2; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			mem[i][j]=mem[i][j-1];
			if(i>=a[j-1])
			 mem[i][j]=mem[i][j-1] || mem[i-a[j-1]][j-1];
		}
	}
	return mem[sum/2][n];
}


int main(){

	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum += a[i];
		}

		bool ans = dp(sum,n);
		if(ans)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;

	}
	return 0;
}	