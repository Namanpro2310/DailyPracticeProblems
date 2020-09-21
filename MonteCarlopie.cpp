//The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.

#include <iostream>
#include <memory>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

double pieMonteCarlo() {
	int countCircle {0}, countSquare {0};
	int max {4} , min {-4};
	for(int i = 0;i<2000;i++) {
		double x = (max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
		double y = (max - min) * ( (double)rand() / (double)RAND_MAX ) + min;
		if (pow(x,2) + pow(y,2)  <= 16) {
			countCircle+=1;
		}
		countSquare +=1;
	}
	double pie = (countCircle / (double)countSquare)*4;
	return pie;
}

int main()
{
	
	cout<<pieMonteCarlo()<<endl;
	
	return 0;
}
