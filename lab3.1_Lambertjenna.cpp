#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int copies;
	double cost;
	double total;
	double TAX= .055;
	double taxAmount;
	cout << setprecision(2) << fixed;
	cout << "How many copies would you like printed? ";
	cin >> copies;
	cout << "You have ordered " << copies << " copies.";
	if (copies <= 100)
		cost = copies * .3;
	else
		cost = (copies - 100) * .3 + (100 * .3);
	taxAmount = cost * TAX;
	total = cost + taxAmount;
	cout << "Your total will be $" << total;
}