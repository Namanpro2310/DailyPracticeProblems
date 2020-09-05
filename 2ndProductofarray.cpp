#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> productofarray(vector<int> vec)
{
	int prod {1};
	for(auto i: vec)
	{
		prod*=i;
	}
	vector<int> temp{};
	for(auto i: vec)
	{
		int temp1 = prod/i;
		temp.push_back(temp1);
	}
	return temp;
	
}

int main()
{
	vector<int> vec {7,14,10,2};
	vector<int> result;
	result = productofarray(vec);
	for(auto item: result)
	{
		cout<<item<<" "; 
	}
	
	return 0;
}
