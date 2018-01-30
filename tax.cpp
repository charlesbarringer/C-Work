//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 9
//
//Description: tax figuring
//
//Program: tax.cpp
//
//Complete Date: 17 November, 2016
//
//Developed: Using Microsoft Visual Studio Community 2015
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------
#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;
string status;
int childNum;
double grossSalary, penPerc;

void getData();
double taxAmount(double& taxableInc);

int main()
{
	double taxableInc;
	double taxOwed;

	cout << fixed << showpoint << setprecision(2);

	getData();
	taxAmount(taxableInc);

	cout << "Your taxable amount is " << taxableInc << endl;
	cout << "The tax owed is " << taxAmount(taxableInc) << endl;

	system("pause");
	return 0;
}

void getData()
{
	cout << "Enter your marital status, either single or married" << endl;
	cin >> status;

	if ((status == "married") || (status == "Married") || (status == "MARRIED")
		|| (status == "M") || (status == "m"))
	{
		cout << "How many children under age 14 do you have?" << endl;
		cin >> childNum;
		cout << "Enter your Salary (If both spouses have an income, enter the combined salary)" << endl;
		cin >> grossSalary;
		do
		{
			cout << "You can only allocate a maximum of 6% of your income towards your pension" << endl;
			cout << "What is the percentage of salary being contributed towards your pension fund _ %" << endl;
			cin >> penPerc;

		} while (penPerc >= 7);
	}

	else
	{
		cout << "Enter your Gross Salary" << endl;
		cin >> grossSalary;
		cout << "What is the percentage of salary being contributed towards your pension fund _%" << endl;
		cin >> penPerc;
	}
}

double taxAmount(double& taxableInc)
{
	double taxPay;

	if ((status == "married") || (status == "Married") || (status == "MARRIED") || (status == "M") || (status == "m"))
		taxableInc = grossSalary - (7000 + (penPerc / 100 * grossSalary) + ((2 + childNum) * 1500));

	else
		taxableInc = grossSalary - (4000 + (penPerc / 100 * grossSalary) + 1500);


	if (taxableInc > 40000)
		return taxPay = 8460 + 0.35 * (taxableInc - 40000);

	else if ((taxableInc > 15000) && (taxableInc <= 40000))
		return taxPay = 2250 + 0.25 * (taxableInc - 15000);

	else
		return taxPay = 0.15 * taxableInc;

}