// LargestNumber.cpp : 
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int largestNumber(int n)
{
	int num = pow(10 , n) - 1;
	return num;
}


int main()
{
	int n(0);
	cin >> n;
	int num = largestNumber(n);
	cout << num << endl;
    return 0;
}

