#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
void steps(int n,int S[],int& c)
{
    if(n==0)
    {
        c++;
        return;
    }
    for(int i=0;i<3;i++)
    {
        if(n>=S[i])
        steps(n-S[i],S,c);
    }
}
void steps(int n,int m,int S[],int& c)
{
    if(n==0&&m==0)
    {
        c++;
        return;
    }
    for(int i=0;i<3;i++)
    {
        if(n>=S[i])
        steps(n-S[i],m-1,S,c);
    }
}
int main()
{
    int n;
    cout<<"enter the no. of stairs:";cin>>n;
    int c1=0,c2=0,S[3];
    S[0]=1;
    S[1]=2;
    S[2]=3;
    steps(n,S,c1);
    vector<int> C(n+1);
    C[0]=0;
    C[1]=1;
    C[2]=2;
    C[3]=4;
    for(int i=4;i<=n;i++)
    {
        C[i]=C[i-1]+C[i-2]+C[i-3];
    }
    cout<<"iterative count,any jump:"<<C.back()<<endl;
    cout<<"recursive count,any jump:"<<c1<<endl;
    int s=0;
    for(int i=0;i<=n;i++)
    {
        c2=0;
        steps(n,i,S,c2);
        cout<<"m="<<i<<";count="<<c2<<endl;
        s+=c2;
    }
    cout<<"sum="<<s<<endl;
    
    int C1[n+1];
    memset(C1,0,sizeof(C1));
    C1[0]=1;
    int m=1,j,i,t=0;
    cout<<"Count=  "<<C1[n]<<" for m= "<<0<<endl;
    while(m<=n){
        for(i=n;i>=0;i--){
            C1[i]=0;
            for(j=1;j<4;j++){
                if(i-j>=0)
                    C1[i]+=C1[i-j];
            }
        }
        cout<<"Count=  "<<C1[n]<<" for m= "<<m<<endl;
        t=t+C1[n];
        m++;    
    }
    cout<<"sum="<<t<<endl;
    return 0;

}