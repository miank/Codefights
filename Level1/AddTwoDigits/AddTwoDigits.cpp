// AddTwoDigits.cpp : 
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int addTwoDigits(int n) {
	int sum;
	int q = n / 10;
	int r = n % 10;
	sum = q + r;
	return sum;
}

int main()
{
	int n(0);
	cin >> n;
	int sum = addTwoDigits(n);
	cout << sum << endl;
    return 0;
}

