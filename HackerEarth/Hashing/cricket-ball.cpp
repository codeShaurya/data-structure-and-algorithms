#include <bits/stdc++.h>
using namespace std;

struct meet{
	int start,finish,id;
};

bool Act(meet a,meet b){
	return(a.finish<b.finish);
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int s[n],f[n],p[n];
		int i,j;
		meet a[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
			a[i].start=s[i];
			a[i].id=i+1;
		}
		for(int i=0;i<n;i++){
			cin>>f[i];
			a[i].finish=f[i];
		}
		sort(a,a+n,Act);
		cout<<a[0].id<<" ";
		i=0;
		for(j=1;j<n;j++){
			if(a[j].start>a[i].finish){
				cout<<a[j].id<<" ";
				i=j;
			}
		}
		cout<<endl;
	}
	return 0;
}