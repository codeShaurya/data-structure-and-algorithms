#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> PII;

const int MAX = 1e4 + 5;
bool marked[MAX];
vector<PII> p;

bool comp (PII &a,PII &b){
    double x = (double)a.first/a.second;
    double y = (double)b.first/b.second;
    if(x < y)
        return false;
}

double totalProfit(ll n,ll w){
    double weight=0;
    double profit=0.0;
    for (int i = 0; i < n; ++i){
        if(weight+p[i].second <= w ){
            profit += (double)p[i].first;
            weight += (double)p[i].second;
        }
        else{
            double restW = w-weight;
            profit += p[i].first * restW / p[i].second;
            break;
        }
    }
    return profit;
}

int main(){
    ll n,w,t;
    double pro,wei;
    cin>>t;
    while(t--){
        cin>>n>>w;
        p.clear();
        for (int i = 0; i < n; ++i){
            cin>>pro>>wei;
            p.push_back({pro,wei});
        }

        sort(p.begin(), p.end(),comp);

        // for (int i = 0; i < n; ++i){
        //     double x = 1.00*p[i].first/p[i].second;
        //     cout<<x<<endl;
        // }

        double totProfit = totalProfit(n,w);
        cout << fixed << setprecision(2) << totProfit <<endl;
    }
    return 0;
}