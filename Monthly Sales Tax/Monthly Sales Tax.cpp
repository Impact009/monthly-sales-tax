// Monthly Sales Tax.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declare variables to store values for the month, the year, and the total amount collected at the cash register.
	char reply = 'n';
	const double countySalesTaxPercentage = .02, stateSalesTaxPercentage = .04;
	double countySalesTaxAmount, sales, stateSalesTaxAmount, totalCollected, totalSalesTaxAmount;
	int year;
	string month;

	// Program information and example.
	cout << "This program calculates monthly sales and sales tax.\n\n"

		 << "For example, if the total amount collected at the cash register is $106,\n"
		 << "then the sales for the month were $100, the county sales tax was $2,\n"
		 << "the state sales tax was $4, and the total sales tax is $6.\n\n"

	// Ask the user if he or she wants to enter information.
		 << "This program requires the month, year, and total amount collected at the cash\n"
		 << "register.\n\n"
		 << "Would you like to calculate your totals? (y/n) ";
	cin >> reply;

	if (reply == 'y' || reply == 'y')
	{
		// Clear the screen for calculation.
		system("cls");

		// Input information.
		cout << "Enter the name of the month: ";
		cin >> month;
		cout << "Enter the year: ";
		cin >> year;
		cout << "Enter the total amount collected at the cash register: $";
		cin >> totalCollected;

		// Calculations.
		sales = totalCollected / (1 + countySalesTaxPercentage + stateSalesTaxPercentage);
		countySalesTaxAmount = sales * countySalesTaxPercentage;
		stateSalesTaxAmount = sales * stateSalesTaxPercentage;
		totalSalesTaxAmount = countySalesTaxAmount + stateSalesTaxAmount;

		// Outputs calculations.
		cout << "\n\nMonth: " << month << " " << year
			 << "\n----------------------------"
			 << left << setw(19) << "\nTotal Collected:" << "$" << setprecision(2) << fixed << totalCollected
			 << setw(19) << "\nSales:" << "$" << setprecision(2) << fixed << sales
			 << setw(19) << "\nCounty Sales Tax: " << "$" << setprecision(2) << fixed << countySalesTaxAmount
			 << setw(19) << "\nState Sales Tax:" << "$" << setprecision(2) << fixed << stateSalesTaxAmount
			 << setw(19) << "\nTotal Sales Tax:" << "$" << setprecision(2) << fixed << totalSalesTaxAmount << endl << endl;
	}

	cout << "\nHave a great day!\n\n";
	return 0;
}