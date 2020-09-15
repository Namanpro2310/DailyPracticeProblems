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
			if(vec[i]==vec[vec[i]-1]) {
				i+=1;
				continue;
			}
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
	vector<int> vec {3,-1,1,2,4};
	cout<<firstMissingPositive(vec)<<endl;
	
	return 0;
}
