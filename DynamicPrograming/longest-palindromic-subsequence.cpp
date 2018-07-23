#include <bits/stdc++.h>
using namespace std;

string str;

int dp(int s,int e,int l){
	if(s<0  || e> l)
		return 0;
	if(str[s-1]==str[e+1]){
		return 2+dp(s-1,e-1,l);
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		int l=str.length();
		int ans =dp(l/2,l/2,int l);
		cout<<ans<<endl;

	}
	return 0;
}