#include <bits/stdc++.h>
using namespace std;

map<int,pair<int,int>> mp;
vector<int> GreedyJob;
int maxProf=0;
int main(){
	GreedyJob.resize(100);
	int jobId,Profit,Deadline;
	while(cin>>jobId>>Profit>>Deadline){
		mp.insert(make_pair(Profit,make_pair(Deadline,jobId)));
	}
	for(auto it=mp.rbegin();it!=mp.rend();it++)
	{
		pair<int,pair<int,int>> p=*it;
		Profit=p.first;
		pair<int,int> tmpPair=p.second;
		Deadline=tmpPair.first;
		jobId=tmpPair.second; 
		for(int i=Deadline;i>=1;i--)
		{
			if(GreedyJob[i]==0)
			{
				GreedyJob[i]=jobId;
				maxProf+=Profit;
				break;
			}
		}
	}
	
	for(int i=1;i<GreedyJob.size();i++)
		if(GreedyJob[i])
			cout<<char(GreedyJob[i]+'A'-1)<<" ";
		cout<<endl<<"Max Profit is: "<<maxProf;
		return 0;
	}
