#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t,i=0;
	bool vis[100000];
	cout<<"Enter the no of vertex : ";
	cin>>n;
	vector <pair<int,int> > v[n+1];
	memset(vis,false,sizeof(vis));
	v[0].push_back(make_pair(0,1));

	cout<<"Enter the edges with weight : ";
	for(int i=0;i<n-1;i++){
		int x,y,w;
		cin>>x>>y>>w;
		v[x].push_back(make_pair(w,y));
	}

	t=n;
	int ed[n+1];
	ed[0]=0;
	while(t--)
	{
		int z,z1,z2;
		if(v[i].size()==1){
			z=v[i][0].second;
			if(vis[i]==false)
				ed[z]=ed[i]+v[i][0].first;
			else
				ed[z]=v[i][0].first;
			if(ed[z]>10)
				vis[i]=true;
			else
				vis[i]=false;
		}
		else if(v[i].size()==2){
			z1=v[i][0].second;
			z2=v[i][1].second;
			if(vis[i]==false)
			{
				ed[z1]=ed[i]+v[i][0].first;
				ed[z2]=ed[i]+v[i][1].first;
			}
			else
			{
				ed[z1]=v[i][0].first;
				ed[z2]=v[i][1].first;
			}
			int s=max(ed[z1],ed[z2]);
			if(s>10)
				vis[i]=true;
			else
				vis[i]=false;
		}
		i++;
	}

	for(int i=1;i<=n;i++){
		if(vis[i]==true)
			cout<<i<<" ";
	}
	
	return 0;
}