#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
unordered_set<int >st;

ll dp[102][10000];
int a[109];

int calc_dp(int n, int s){
    if(s==0)
        return 1;
    if(s<0)
        return 0;
    if(n==1)
        return (s==a[n]);
    if(dp[n][s]!=-1)
        return dp[n][s];
    return dp[n][s] = max(calc_dp(n-1,s-a[n]),calc_dp(n-1,s));
}


int main(){
    int n,t,sum,count;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        count=1;
        memset(dp , -1, sizeof(dp));
        for(int i=1;i <= n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        
        for(int j=1;j<=sum;j++){
            if(calc_dp(n,j))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}