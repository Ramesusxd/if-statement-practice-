#include "pch.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int firstnumber;
	int secondnumber;

	cout << "Enter a number.. " << '\n';
	cin >> firstnumber;
	cout << "The first number is " << firstnumber << ". Pick a second number... " << '\n';
	cin >> secondnumber;
	cout << "The Second Number is... " << secondnumber << '\n';

	if (firstnumber > secondnumber)
	{
		cout << "The number " << firstnumber << " is the larger number." << '\n';
	}
	if (firstnumber < secondnumber)
	{
		cout << "The number " << secondnumber << " is the larger number." << '\n';
	}
	if (firstnumber == secondnumber)
	{
		cout << "the number you picked " << firstnumber << " is equal to the second number you picked which is " << secondnumber << '\n';
	}


}


