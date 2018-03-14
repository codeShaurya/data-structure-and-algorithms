#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const  ll m = 1e5;
ll a[m];

priority_queue <ll, vector<ll>, greater<ll> > pq;

ll minSum(ll n){
    ll n1 = 0, n2 = 0;
    while(!pq.empty()){

        //Acsii value of 0 = 48
        n1 = ( n1*10 + pq.top());
        pq.pop();
        if(!pq.empty()) 
        {
            n2 = ( n2 * 10 + pq.top());
            pq.pop();
        }
    }

    return n1+n2;
}

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for (ll i = 0; i < n; ++i){
            cin>>a[i];
            pq.push(a[i]);
        }
        ll ans = minSum(n);
        cout<<ans<<endl;
    }
    return 0;
}
