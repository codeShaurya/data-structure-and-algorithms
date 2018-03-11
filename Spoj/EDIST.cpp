#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mem[3000][3000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,l1,l2;
	cin>>t;
	string str1,str2;

	while(t--){
		cin>>str1;
		cin>>str2;
		 // for all i, j, dp[i][j] will hold the edit distance between the first  
        // i characters of source string and first j characters of target string

		l1=str1.length();
		l2=str2.length();
		// cout<<l1<<l2;

		for(int i=0;i<l1;i++)
			mem[i][0]=i;

		for(int i=0;i<l2;i++)
			mem[0][i]=i;

		for (int i = 0; i < l1; ++i)
		{
			for (int j = 0; j < l2; ++j)
			{
					if(str1[i]==str2[j])
						mem[i+1][j+1]=mem[i][j];
					else
						mem[i+1][j+1]=1+min(min(mem[i][j],mem[i+1][j]),mem[i][j+1]);
			}
		}
		cout<<mem[l1][l2]<<endl;
	}
	return 0;
}