#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int par[10000];

vector< pair<int, pair <int, int > > > v,ans;
vector< pair<int, pair <int, int > > > :: iterator itr;

bool comp(const pair<int, pair <int, int >> & a, const pair<int, pair <int, int >> & b  ){
  if(a.second.first > b.second.first)
    return false;
}

int pare (int a){
  while(a !=par[a])
   a=par[a];
 return a;
}

void make_un(int a,int b){
 int x=pare(a);
 int y=pare(b);
 par[x]=par[y];
}


int main(){
	int w,n,s,a,b,e,count=0;
  cout<<"Enter no of vertex and edges : ";
  cin>>n>>e;
  v.clear();

  cout<<"Enter Edges :"<<endl;
  for (int i = 0; i < e; ++i){
   cin>>a>>b>>w;
   v.push_back({w,{a,b}});
 }

 for(int i=1;i<=n;i++)
  par[i]=i;
sort(v.begin(),v.end());

for(int i=0;i<e;i++){
  int a =v[i].second.first;
  int b= v[i].second.second;
  int q=v[i].first;
  if(pare(a) != pare(b)){
    ans.push_back({q,{a,b}});
    count++;
    make_un(a,b);
  }
}
cout<<"Edges in minimum spanning tree : "<<endl;
for(int i=0;i<count;i++)
  cout<<ans[i].second.first<<"->"<<ans[i].second.second<<" "<<endl;

return 0;
}

/**
11
19
1 2 8
1 7 9
1 8 10
1 9 6
1 10 12
1 11 3
2 5 2
2 3 10
2 11 7
5 7 6
5 6 10
5 4 13
3 4 9
3 11 5
6 7 8
7 8 7
8 9 3
9 10 10
10 11 8
*/