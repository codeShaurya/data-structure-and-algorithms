
#include <iostream>
#include <queue>
 
using namespace std;
 
void showpq(priority_queue <pair<int,int>,vector< pair<int,int> > , greater<pair<int,int> > > gq)
{
    priority_queue <pair<int,int >,vector< pair<int,int> > , greater<pair<int,int> > > g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top().first<<" "<<g.top().second;
        g.pop();
    }
    cout << '\n';
}
 
int main ()
{
    priority_queue <pair<int,int>,vector< pair<int,int> > , greater<pair<int,int> > > gquiz;
    gquiz.push({10,10});
    gquiz.push({10,15});
    gquiz.push({20,30});
    gquiz.push({5,5});
    gquiz.push({1,2});
 
    cout << "The priority queue gquiz is : ";
    showpq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top().first<<" "<<gquiz.top().second; 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
 
    return 0;
}