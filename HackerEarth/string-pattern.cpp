#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll m=1e6;

ll lps[m];
string pat,str;

void lpsAray(ll l){
	ll i=1;
	ll length=0;
	lps[0]=0;  //Always
	while(i<l){
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


void searchPattern(ll ls,ll pl){
	ll i=0;  //index for string
	ll j=0;  //index for pattern
	while(i<ls){
		if(str[i]==pat[j]){
			i++;
			j++;
		}
		if(j == pl){
			cout<<i-j<<endl;
			j=lps[j-1];
		}
		// j match hone ke bad bhosdi wala nahi mila to

		else if( i< ls && str[i]!=pat[j] ){
			if(j!=0)
				j=lps[j-1];
			else
				i++;
		}
	}
}


int main(){
	ll n;
	while(cin>>n){
		cin>>pat>>str;
		ll lengthString=str.length();
		ll patLength=pat.length();
		if(lengthString<patLength)
			cout<<" ";
		else{

			lpsAray(patLength);
			searchPattern(lengthString,patLength);
		}
	}
	return 0;
}