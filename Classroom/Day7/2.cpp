#include<bits/stdc++.h>

using namespace std;
vector< pair<int , int> > v[11000];

int a[1000];

int main(int argc, char const *argv[])
{
	int n,e,a,b,c;
	cin>>n>>e;
	for (int i = 0; i < e; ++i){
		cin>>a>>b>>c;
		v[a].push_back({b,c});
	}
	memset(a,INT_MAX,sizeof(a));

	for (int i = 2; i < n; ++i){
		a[2] = 
	}

	a[1]=0;

	for (int i = 2; i < n; ++i){
		for (int i = 0; i < e; ++i){
			if(a[i] > a[i])
		}
	}


	return 0;
}