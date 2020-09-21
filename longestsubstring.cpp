//Given an integer k and a string s, find the length of the longest substring that contains at most k distinct characters.
//For example, given s = "abcba" and k = 2, the longest substring with k distinct characters is "bcb".

#include <iostream>
#include <memory>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubstring(string str,int k) {
	map <char,int> map1 {};
	map1[str[0]] = 1;
	size_t len = str.length();
	size_t i {0}, j {1};
	int max_len {1};
	int length {1};
	while (j<len) {
		if (map1.find(str[j])!=map1.end()) {
			map1[str[j]] +=1;
			j+=1;
			length+=1;
		}
		else {
			if(map1.size()==k) {
				if(map1[str[i]]>1) {
					map1[str[i]] -=1;
				}
				else {
					map1.erase(str[i]);
				}
				i+=1;
				length-=1;
			}
			else {
				map1[str[j]] = 1;
				j+=1;
				length+=1;
			}
		}
		if (length>max_len) {
			max_len = length;
		}
	}
	return max_len;
	
		
}

int main()
{
	string str = "abcba";
	int k {2};
	cout<<longestSubstring(str,k)<<endl;
	
	return 0;
}
