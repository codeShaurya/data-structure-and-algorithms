#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> v;

int main(){

    ll t,k,n,l;
    cin>>t;
    while(t--){
        cin>>n>>k;
        v.clear();
        ll c=0;
        for (int i = 0; i < n; ++i){
            cin>>l;
            c +=l;
            v.push_back(l);
        }
        sort(v.begin(), v.end());

        // for (int i = 0; i < n; ++i)
        //     cout<<v[i]<<endl;

        for(int i=0;i<n;i++){
           ll s=0;
           for(int j=0;j<n;j++){
            if(i!=j){
                if(v[j] < v[i])
                    s += v[j];
                if(v[j] > v[i] + k)
                    s += v[j] - v[i] - k;
            }
        }
        if(c > s)
            c = s;
    }
    cout<<c<<endl;
}
return 0;
}