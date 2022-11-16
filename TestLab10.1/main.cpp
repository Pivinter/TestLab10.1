#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str, int i)
{
	if (str[i] != '\0')
		if (str[i] == 'B' || str[i] == 'A' || str[i] == 'S' || str[i] == 'I' || str[i] == 'C')
			return 1 + Count(str, i + 1);
		else
			return Count(str, i + 1);
	else
		return 0;
}
int main()
{
	char str[10];
	cout << "Enter string:" << endl;
	cin.getline(str, 9);
	cout << "String contained " << Count(str, 0) << " groups of 'BASIC'" << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	cout << "Modified string (param) : " << dest1 << endl;
	return 0;
}
