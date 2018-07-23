#include <bits/stdc++.h>
using namespace std;

bool dp[1000][1000];

int main(){

	string s;
	int t;
	cin>>t;
	while(t--){
		int maxLength=0;
		cin>>s;
		int l= s.length();

		memset(dp,0,sizeof(dp));

	// for length 1;
		
		for (int i = 0; i < l; ++i)
			dp[i][i]=true;
		
	// for length 2;

		int st=0,end=0;
		for (int i = 0; i < l-1; ++i)
		{
			if(s[i]==s[i+1]){
				{
					dp[i][i+1]=true;
					if(maxLength<2){
						maxLength=2;
						st=i;
						end=i+1;
					}
				}
			}
		}

		for (int k = 3; k <=l; ++k)
		{
			for (int i = 0; i < l-k+1; ++i)
			{
				int e=k+i-1;
				if(s[i]==s[e] && dp[i+1][e-1])
				{
					dp[i][e]=true;
					if(k>maxLength){
						maxLength=k;
						st=i;
						end=e;
					}
				}
			}
		}
		for (int i=st;i<=end;i++)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}