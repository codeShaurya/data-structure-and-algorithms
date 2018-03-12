#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> v;

ll _maxJob = 0;

bool _isPossible(ll t, ll k, ll n){
    ll count = 1;
    ll _job = 0;
    for (int i = 0; i < n;){
        if( _job + v[i] <= t){
            _job += v[i];
            i++;
        }
        else{
            count++;
            _job = 0;
        }
    }

    return count <= k;
}

ll _minTime(ll k, ll n, ll x){
    ll start = 0;
    ll end = x; 

    while(start <= end){
        ll mid = (start+end)/2;

        if(mid >= _maxJob && _isPossible(mid, k, n)){
            end = mid-1;
            x = min(mid, x);
        }
        else{
            start = mid+1;
        }
    }
    return x;
}


int main(){
    ll k, t, n, x, tot = 0;
    cin >> k>> t>> n;

    for (int i = 0; i < n; ++i){
        cin>>x;
        if(x > _maxJob)
            _maxJob = x;
        tot += x;
        v.push_back({x});
    }

    ll ans = _minTime(k, n, tot);
    cout<<(ans*t)<<endl;

    return 0;
}