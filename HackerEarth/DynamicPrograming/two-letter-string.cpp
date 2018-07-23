#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int m=1e4+5;
const int mod=1e9+7;

ll dp[m][12]; //Here dp[a][b] is the array that represent the number of string of length a-1 that do not have b-1 consecutive x

void two_string(){
	for (int i = 0; i < m; ++i)
		dp[i][0]=0;
	for (int i = 0; i < 12; ++i)
		dp[0][i]=0;
	for (int i = 1; i < m; ++i)
		dp[i][1]=1;
	for (int i = 1; i < 12; ++i)
		dp[1][i]=1;
	for(int p=1;p<12;p++) {
		for(int i=2;i<m;i++) {
			for(int j=i-1;j>=0;j--) {
				if(i-j < p) {
					dp[i][p] += dp[j][p];
					dp[i][p] %= mod;
				}
			}
		}
	}


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t,n,p;
	cin>>t;
	two_string();
	while(t--){
		cin>>n>>p;
		cout<<dp[n][p]<<endl;
	}
	return 0;
}