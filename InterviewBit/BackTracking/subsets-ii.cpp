

void _generate_ans(vector< vector< int > > &ans, vector< int > &c,
                   int index, vector< int > &A){
	if(index >= A.size()){
		ans.push_back(c);
		return;
	}

	int curI = index +1;

	while(curI < A.size() && A[index] == A[curI])
		curI++;

	// no of duplicates = curI - index
	int count = curI - index;
	for (int i = 0; i <= count; ++i){
	for (int j = 0; j < i; ++j)
		c.push_back(A[index]);
	_generate_ans(ans, c, curI, A);
	for (int j = 0; j < i; ++j)
		c.pop_back();
	}
}

vector< vector< int > > Solution::subsetsWithDup( vector < int > &A ) { 
	vector< vector < int > > ans;
	vector < int > c;

	ans.clear();
	c.clear();
	sort(A.begin(), A.end());

	_generate_ans(ans, c, 0, A);
	sort(ans.begin(), ans.end());

	return ans;
}

