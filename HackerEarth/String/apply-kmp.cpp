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


int searchPattern(ll ls,ll pl,int count){
	ll i=0;  //index for string
	ll j=0;  //index for pattern
	while(i<ls){
		if(str[i]==pat[j]){
			i++;
			j++;
		}
		if(j == pl){
			count++;
			// cout<<i-j<<endl;
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
	return count;
}


int main(){
	cin>>pat>>str;
	int count=0;
	ll lengthString=str.length();
	ll patLength=pat.length();
	if(lengthString<patLength)
		cout<<0;
	else{

		lpsAray(patLength);
		count=searchPattern(lengthString,patLength,count);
		cout<<count<<endl;
	}
	return 0;
}