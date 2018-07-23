#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll m=1e6;

ll a[m],dp[m];

ll calc_dp(ll n,ll k){
    if(k==0){
        return 0;
    }
    if(n=1){
        return a[n];
    }
    
    if(dp[n]!= -1){
        return dp[n];
    }
    
    return dp[n]= max((a[n]+calc_dp(n-1,k-1)),calc_dp(n-1,k));
}

int main(){
    ll k,n;
    cin>>k>>n;
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    memset(dp,-1,sizeof(dp));
    
    ll ans=calc_dp(n-1,k);
    cout<<ans<<endl;
    return 0;
}