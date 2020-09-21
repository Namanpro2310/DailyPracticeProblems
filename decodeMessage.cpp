//Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.
//For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int decodeMessage(string str) {
	int pairsEven {0}, pairsOdd {0};
	size_t i {0};
	size_t len = str.length();
	while (i< len-1) {
		if((str[i]-'0')==1) {
			pairsEven+=1;
		}
		else if((str[i]-'0')==2 and (str[i+1]-'0')<7) {
			pairsEven+=1;
		}
		i+=2;
	}
	i = 1;
	while (i< len-1) {
		if((str[i]-'0')==1) {
			pairsOdd+=1;
		}
		else if((str[i]-'0')==2 and (str[i+1]-'0')<7) {
			pairsOdd+=1;
		}
		i+=2;
	}
	int result = pow(2,pairsEven) + pow(2,pairsOdd) - 1;
	return result;
		
}

int main()
{
	string str  = "12493214";
	cout<<decodeMessage(str)<<endl;
	
	return 0;
}
