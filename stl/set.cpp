#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	set< int, greater <int> > s;
	set <int, greater <int> > :: iterator itr;
	//Inserting element into set
	s.insert(20);
	s.insert(10);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(30);
	s.insert(90);

    // Printing element of the set
	for (itr = s.begin(); itr != s.end(); ++itr)
		cout <<*itr<<endl;
	cout<<endl;

	// copying one set to another
	set< int, greater <int> > r(s.begin(),s.end());
	for (itr = r.begin(); itr != r.end(); ++itr)
		cout <<*itr<<endl;
	cout<<endl;

	//erasing set
	s.erase(s.begin(), s.find(30));
	for (itr = s.begin(); itr != s.end(); ++itr)
		cout <<*itr<<endl;
	cout<<endl;

	r.erase(r.begin(), r.find(30));
	for (itr = r.begin(); itr != r.end(); ++itr)
		cout <<*itr<<endl;
	cout<<endl;

    // remove all elements with value 50 in s
	int num;
	num = s.erase (20);
	cout << num << " removed \n" ;

    //lower bound and upper bound for set s
    //It is not complete .
	cout << "s.lower_bound(30) : "<< *s.lower_bound(30) << endl;
	cout << "s.upper_bound(10) : "<< *s.upper_bound(10) << endl;

	return 0;
}