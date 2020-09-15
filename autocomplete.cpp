
//Implement an autocomplete system. That is, given a query string s and a set of all possible query strings, return all strings in the set that have s as a prefix.
//For example, given the query string de and the set of strings [dog, deer, deal], return [deer, deal].

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> autocomplete(vector<string> &vec , string s) {
	int flag {0};
	vector <string> vec1 {};
	for(auto item : vec) {
		flag = 0;
		for(size_t i = 0; i < s.length() ; i++) {
			if(item[i]!=s[i]) {
				flag = 1;
				break;
			}
		}
		if(flag==0) {
			vec1.push_back(item);
		}
		
	}
	return vec1;
		
}

int main()
{
	vector<string> vec {"dog", "deer", "deal"};
	for(auto item : autocomplete(vec,"de")) {
		cout<<item<<" ";
	}
	cout<<endl;
	return 0;
}
