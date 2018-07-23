// karanaggarwal
#include<bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define CLR(a) a.clear()
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define TR(v,it) for( LET(it,v.begin()) ; it != v.end() ; it++)
#define FORi(i,a,b) for(LET(i,a) ; i<b; i++)
#define repi(i,n) for(int i=0; i<(int)n;i++)
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define pi(n) printf("%d",n)
#define piw(n) printf("%d ",n)
#define pin(n) printf("%d\n",n)
#define sortv(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()
#define DRT()  int t; cin>>t; while(t--)
#define DRI(n)  int n; cin>>n; 
#define DRII(n,m)  int n,m; cin>>n>>m; 
#define TRACE
using namespace std;
//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)
#endif
typedef long long LL;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector< PII > VPII;
#define mod 1000000007
bool D3[4][4][4];
bool D2[4][4];
bool D1[4];
LL A[16][16];
LL R[16][16];
LL T[16];
void pro()
{
    SET(A,0);
    for(int x=0; x<4;x++)
    {
        if(D1[x]) continue;
        for(int y = 0; y<4; y++)
        {
            if(D1[x] || D2[y][x]) continue;
            for(int z = 0; z<4;z++)
                if(D3[z][y][x]==false)
                    A[4*y + x][4*z + y] = 1;
            }
        }
        SET(T,0);
        repi(x,4) repi(y,4)
        {
            if(D2[x][y] || D1[x] || D1[y])continue;
            T[4*x+y]  = 1;
        }
    }
    
    void mul(LL A[][16], LL B[][16])
    {
        LL C[16][16];
        repi(i,16)repi(j,16)
        {
            C[i][j] = 0;
            repi(k,16)
            C[i][j] = (C[i][j] + A[i][k]*B[k][j]) % mod;
        }
        repi(i,16)repi(j,16) A[i][j] = C[i][j];
    }
    void power(LL A[][16], LL p)
    {
        SET(R,0); repi(i,16)R[i][i] = 1;
        while(p)
        {
            if(p&1) mul(R,A); mul(A,A); p/=2;
        }
    }
    int main()
    {
        DRT()
        {
            SET(D1,0);SET(D2,0);SET(D3,0);
            LL N;
            int K;
            cin>>N>>K;
            while(K--)
            {
                string s; cin>>s;
                if(s.size() == 3)D3[s[0]-'a'][s[1]-'a'][s[2]-'a'] = true;
                if(s.size() == 2)D2[s[0]-'a'][s[1]-'a'] = true;
                if(s.size() == 1)D1[s[0]-'a'] = true;
            }
            pro();
            if(N==1){int ans = 0; repi(i,4)if(D1[i]==false)ans++; cout<<ans<<endl; continue;}
            if(N==2){int ans = 0; repi(i,4)repi(j,4)if(D2[i][j]==false and D1[i]==false and D1[j]==false)ans++; cout<<ans<<endl; continue;}

            power(A,N-2);
            LL ans  = 0;
            for(int i=0; i<16; i++)
                for(int j=0 ; j<16; j++)
                {
                    ans += R[i][j]*T[j]; if(ans>=mod)ans%=mod;
                }
                cout<<ans<<endl;
            }
            return 0;
        }
