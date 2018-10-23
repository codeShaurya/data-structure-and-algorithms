#include<iostream>
#include<bits/stdc++.h>
// iteration and input/output stream
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define srep(i, begin, end) for (__typeof(end) i = begin; i != end; i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl prinf("\n")
#define tr(cont,it) \
for(decltype(cont.begin()) it = cont.begin(); it!= cont.end() ; it++)
 
#define tc() int t; cin >> t ; while (t--)
//STL shortcuts
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define F first
#define S second
#define MP make_pair
 

using namespace std;
 
typedef long long int ll; // 64 bit integer
typedef unsigned long long int  ull; // 64 bit unsigned integer
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<int,ll> pill;
 
inline void smax(int &x , int y) { x = max(x , y) ; }
inline void smin(int &x , int y) { x = min(x , y) ; }
 
#define MOD 1000000007
#define inf 4000000000000000000LL
#define SYNC std::ios::sync_with_stdio(false);  cin.tie(NULL);
 
ll gcd(ll a,ll b){ return ((b==0)? a:gcd(b,a%b) ); }
 
int main()
{
    SYNC
    int m;
    cin>>m;
    vll dp(1000001);
    dp[0] =1;
    dp[1] = 2;
    dp[2] = 4;
    dp[3] = 7;
    rep(i,4,1000001)
    dp[i] = ((dp[i-1]*2)%MOD -dp[i-4] + MOD)%MOD ;
    rep(i,0,m)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
}