// Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool palindrome(string palindrome)
{
	int size = palindrome.length();

	if (size == 1)
		return true;
	
	for (int i = 0; i < size / 2 ; i++)
	{
		if (palindrome[i] != palindrome[size - i - 1])
			return false;
	}
	return true;
}

int main()
{
	char str[100];
	cout << "Enter the string to check wether it is palindrome or not " << endl;
	cin >> str;

	bool result = palindrome(str);
	if (result)
	{
		cout << "It's is a palindrome " << endl;
	}
	else
	{
		cout << "It's not a palindrome " << endl;
	}

    return 0;
}

