#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[100000];

ll findSmallest(ll s, ll d){
    if (s == 0){
        if( d == 1)
            return 0;
        else 
            return -1;
    }
    if (s > 9*d)
        return -1;

    s--;

    for (int i=d-1; i>0; i--){
        if (s > 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            s = 0;
        }
    }

    a[0] = s + 1;
    return 1;
}

int main(){
    ll t,d,s;
    cin>>t;
    while(t--){
        cin>>s>>d;
        ll ans = findSmallest(s, d);
        if(ans < 1)
            cout<<ans<<endl;
        else{
            for (int i = 0; i < d; ++i)
                cout << a[i];
        }
        cout << endl;
    }
    return 0;
}