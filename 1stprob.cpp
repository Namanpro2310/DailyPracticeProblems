#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool totalisk(vector<int> vec, int k)
{
	map<int, int> map;
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (map.find(k- vec[i]) != map.end())
		{
			return true;
		}
		map[vec[i]] = i;
	}
	return false;
}

int main()
{
	vector<int> vec {7,14,10,2};
	cout<<boolaplha;
	cout<<totalisk(vec,17)<<endl;
	
	return 0;
}
