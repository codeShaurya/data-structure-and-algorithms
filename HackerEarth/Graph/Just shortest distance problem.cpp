/*

You are given an empty graph of N vertices and M queries of two types:

    Given a number X answer what is the shortest distance from the vertex 1 to the vertex X.
    Given two integers X, Y add the new oriented edge from X to Y.

Input
The first line contains two integers N and M. The following M lines describe queries in the format mentioned above

Output
For each query of the first type output one integer on a separate line - answer for the corresponding query. Output -1 if it's impossible to get to the vertex in this query from the vertex 1.

Constraints

    1 <= N <= 1000
    1 <= M <= 500 000
    1 <= X, Y <= N

Subtasks

    N <= 500, M <= 5 000 in 50 % of test data


SAMPLE INPUT

4 7
1 4
2 1 2
2 2 3
2 3 4
1 4
2 2 4
1 4




SAMPLE OUTPUT

-1
3
2



*/


/*************************************************************************/


#include<bits/stdc++.h>

#define ll long long
#define FOR(i,s,n) for(ll i = s; i < (n); i++)
#define FORD(i,s,n) for(ll i=(n)-1;i>=s;i--)
#define mp(x,y) make_pair(x,y)
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d",n)
#define println(n) printf("%d\n",n)
#define printsp(n) printf("%d ",n)

using namespace std;
vector<ll> adj[1005];
ll height[1005];
ll visited[1005] = {0};

void BFS(ll s);

int main()
{
    FOR(i,0,1005)
        height[i] = 10000;
    height[1] = 0;
    ll n,m,x,y,type;
    cin>>n>>m;
    FOR(i,0,m)
    {
        cin>>type;
        if(type == 2)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            if((height[x]+1)<=height[y])
            {
                height[y] = height[x]+1;
                BFS(y);
            }
        }
        else
        {
            cin>>x;
            if(height[x] == 10000)
                cout<<-1<<endl;
            else
                cout<<height[x]<<endl;
        }
    }
    return 0;
}

void BFS(ll s)
{
    ll v;
    queue <ll> q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty())
    {
        v = q.front();
        q.pop();
        FOR(i,0,adj[v].size())
        {
            if(visited[adj[v][i]])
                continue;
            visited[adj[v][i]] = 1;
            ll p = height[adj[v][i]];
            height[adj[v][i]] = min(height[adj[v][i]],height[v]+1);
            if(p != height[adj[v][i]])
                q.push(adj[v][i]);
        }
    }
    memset(visited,0,sizeof(visited));
}