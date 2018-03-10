#include<iostream>
#include<string>
using namespace std;

int whethervalid(string s,int n)
{
	int p=0;
	int count=0;
	while(p<=s.length())
	{
		if(s[p]=='a'&&s[p+1]=='b'&&s[p+2]=='c')
		{
			p+=3;
			count++;
		}
		else
		p++;
	}
	if(count==1)
	return 1;
	else
	return 0;
}

void exhaustsearch(string s,int k,int n)
{
	int p1,p2,p3;
	
	if(k!=n-1)
	{
		exhaustsearch(s+'a',k+1,n);
		exhaustsearch(s+'b',k+1,n);
		exhaustsearch(s+'c',k+1,n);
	}
	else
	{
		
		p1=whethervalid(s+'a',n);
		if(p1==1)
		cout<<s+'a'<<endl;
		p2=whethervalid(s+'b',n);
		if(p2==1)
		cout<<s+'b'<<endl;
		p3=whethervalid(s+'c',n);
		if(p3==1)
		cout<<s+'c'<<endl;
		
	}
}

int main()
{
	char set[3]={'a','b','c'};
	int n,k;
	string s;
	
	cout<<"enter string:";
	cin>>s;
	int p=whethervalid(s,n);
	if(p==1)
	cout<<"abc substring present"<<endl;
	else
	cout<<"abc substring absent"<<endl;
	cout<<"enter  n :";
	cin>>n;
	k=1;
	cout<<"all strings from given set"<<endl;
	exhaustsearch("a",k,n);
	exhaustsearch("b",k,n);
	exhaustsearch("c",k,n);
	
}