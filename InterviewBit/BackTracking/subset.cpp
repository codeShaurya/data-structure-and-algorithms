

void _generate_ans(vector< vector< int > > &ans, vector< int > &c,
                   int index, vector< int > &A){
	if(index >= A.size()){
		ans.push_back(c);
		return;
	}

	_generate_ans(ans, c, index + 1, A);

	c.push_back(A[index]);
	_generate_ans(ans, c, index + 1, A);
	c.pop_back();
}

vector< vector< int > > Solution::subsets( vector < int > &A ) { 
	vector< vector < int > > ans;
	vector < int > c;
	
	ans.clear();
	c.clear();

	sort(A.begin(), A.end());
	_generate_ans(ans, c, 0, A);
	sort(ans.begin(), ans.end());
	
	return ans;
}

