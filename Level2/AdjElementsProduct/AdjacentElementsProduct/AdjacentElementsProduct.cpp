// AdjacentElementsProduct.cpp : 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int adjacentElementsProduct(std::vector<int> inputArray) {

	int m(0), n(0), prod(0), mult(-999), j(0);
	for (int i = 0; j < inputArray.size() - 1; i++)
	{
		m = inputArray[i];
		n = inputArray[j + 1];
		prod = m * n;

		if (mult < prod)
			mult = prod;
		j++;
	}
	return mult;
}

int main()
{
	vector<int> v1;
	int input(0);

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		v1.push_back(input);
	}

	int result = adjacentElementsProduct(v1);
	cout << result << endl;
    return 0;
}

