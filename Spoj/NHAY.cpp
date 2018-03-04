#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll m=1e6;

ll lps[m];
string pat,str;

void lpsAray(ll len){
	cout<<"ckjjh";
	ll i=1;
	ll length=0;
	lps[0]=0;  //Always
	while(i<len){
		if(pat[i] == pat[length]){
			length++;
			lps[i]=length;
			i++;
		}
		else{
			if(length!=0){
				length=lps[length-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
}

int main(){

	cin>>str>>pat;
	ll ls=str.length();
	ll lp=pat.length();
	lpsAray(ls);
	// cout<<"lps ban gayi hai bhosdi ke";

	// // searchPattern(lengthString,patLength);
	// cout<<"search kar liya ";
	return 0;
}