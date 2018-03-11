#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;
typedef long long ll;
typedef pair<ll, ll> PII;
bool marked[MAX];

vector <PII> adj[MAX];

ll prim(ll x){
    
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    memset(marked,false,sizeof(marked));

    ll y;
    ll minCost = 0;
    PII p;
    Q.push({0, x});
    
    while(!Q.empty()){
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i){
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minCost;
}

int main(){
    ll nodes, edges, x, y;
    ll weight, minCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i){
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }

    minCost = prim(1);
    cout << minCost << endl;
    return 0;
}