// Created by Jaimin Chaudhari
// Date : 6-10-2018

/*

Little PandeyG is a curious student, studying in HEgwarts. Being smarter, faster and displaying more zeal for magic than any other student, one by one he managed to impress the three hidden witches of the school. They knew his secret desire to be a warrior, so each of them gave him some super power to use if he's up for a fight against one of his enemies.

    The first witch: She gave PandeyG the power to take away one unit of strength away from his enemies. - Eg 36-1 = 35

.
The second witch: Jealous of the first witch, the second one gave the kid the power to halfen the strength of his enemies. - Eg. 36/2 = 18
.
The third witch: Even better, she gave him the power to reduce the strength of his enemies to one third of what it initially was. - Eg. 36/3 = 12

    .

The witches, though, clearly told him that he'll be only able to use these powers if the strength of the opponent is an integer, otherwise not.

Since, PandeyG is one smart kid, he knew that by using all three of the powers he has got, he'll be able to defeat every enemy he's ever going to face, sometime or the other, in some number of moves.

Now, here's the twist: In spite of having all these powers, PandeyG was still losing matches against his enemies - because he was unable to use them in the optimal fashion. To defeat an opponent, you need to make sure that the enemy has only 1 unit of strength left in him.

Given the value 'k' - k being the units of the enemy of PandeyG's strength, help PandeyG figure out the minimum number of magical hits he'll be needing to defeat his opponent, using his powers.

Input Format: The first line represents the number of test cases, t. Followed by t lines - and on every line, a number n - with the strength unit of your enemy.

Output format: For every number n, print the minimum number of hits needed to defeat his enemy by making his strength equal to 1.

Constraints:

    1 <= t <= 1000
    1 <= n <= 10^9



SAMPLE INPUT

5
1
2
3
4
5




SAMPLE OUTPUT

0
1
1
2
3



*/



/***************************************************************************/


#include<bits/stdc++.h>

#define ll long long
#define FOR(i,s,n) for(ll i = s; i < (n); i++)
#define FORD(i,s,n) for(ll i=(n)-1;i>=s;i--)
#define mp(x,y) make_pair(x,y)
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d",n)
#define println(n) printf("%d\n",n)
#define printsp(n) printf("%d ",n)

using namespace std;
void BFS(ll n);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n == 1)
        {
            cout<<0<<endl;
            continue;
        }
        BFS(n);
    }
    return 0;
}

void BFS(ll n)
{
    ll next,prev;
    unordered_set<int> s;
    queue< pair<ll,ll> > q;
    q.push(mp(n,0));
    s.insert(n);
    while(!q.empty())
    {
        ll v1 = q.front().first;
        ll v2 = q.front().second;
        q.pop();
        if(v1-1 == 1)
        {
            cout<<(v2+1)<<endl;
            return;
        }
        else
        {
            prev = s.size();
            s.insert(v1-1);
            next = s.size();
            if(prev != next)
                q.push(mp(v1-1,v2+1));
        }
        if(v1%2 == 0)
        {
            if(v1/2 == 1)
            {
                cout<<(v2+1)<<endl;
                return;
            }
            else
            {
                prev = s.size();
                s.insert(v1/2);
                next = s.size();
                if(prev != next)
                    q.push(mp(v1/2,v2+1));
            }
        }
        if(v1%3 == 0 )
        {
            if(v1/3 == 1)
            {
                cout<<(v2+1)<<endl;
                return;
            }
            else
            {
                prev = s.size();
                s.insert(v1/3);
                next = s.size();
                if(prev != next)
                    q.push(mp(v1/3,v2+1));
            }
        }
    }
}
