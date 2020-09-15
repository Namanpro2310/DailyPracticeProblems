#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int firstMissingPositive(vector<int> &vec) {
	int len = vec.size();
	int i = 0;
	while(i<len) {
		if(vec[i]<=len && vec[i]>0 && vec[i]!=i+1) {
			int temp = vec[i];
			vec[i] = vec[vec[i]-1];
			vec[temp-1] = temp;
		}
		else {
			i+=1;
		}
	}
	for(int i = 0; i <len; i++) {
		if(vec[i]!=i+1) {
			return i+1;
		}
	}
	return len;
		
}

int main()
{
	vector<int> vec {7,14,10,2};
	cout<<firstMissingPositive(vec)<<endl;
	
	return 0;
}
