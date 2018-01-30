//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 3
//
//Description: coffee shop 
//
//Program: coffee.cpp
//
//
//Complete Date: 13 November, 2016
//
//Developed: Using Microsoft Visual Studio Community 2015
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;

const double SMALL_CUP_COST = 1.75;
const double MEDIUM_CUP_COST = 1.90;
const double LARGE_CUP_COST = 2.00;
char choice;
void tutorial(int & small, int & totalSmall, int & medium, int & totalMedium, int & totalLarge, int & large);
void sales(int & small, int & medium, int & large);
void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge);
void totalCupsSold(int & totalSmall, int & totalMedium, int & totalLarge);
void totalSales(int & totalSmall, int & totalMedium, int & totalLarge);











int main()
{
	int small = 0;
	int medium = 0;
	int large = 0;
	int totalSmall = 0;
	int totalMedium = 0;
	int totalLarge = 0;
	tutorial(small, totalSmall, medium, totalMedium, large, totalLarge);

	system("pause");
	return 0;

}

void tutorial(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{
	int a = 0;
	while (a == 0) {
		cout << "Please select which option you would like." << endl;
		cout << "1. Buy Coffee" << endl;
		cout << "2. Display the cups of coffee of each size sold" << endl;
		cout << "3. Display the total cups of coffee sold" << endl;
		cout << "4. Display the total amount of money earned" << endl;
		cin >> choice;

		switch (choice)
		{
		case '1':
			sales(small, medium, large);
			break;
		case '2':
			sizesSold(small, totalSmall, medium, totalMedium, large, totalLarge);
			break;
		case '3':
			totalCupsSold(totalSmall, totalMedium, totalLarge);
			break;
		case '4':
			totalSales(totalSmall, totalMedium, totalLarge);
			break;
		default:
			cout << "Invalid number selection. Please select a number between 1 and 4." << endl;
		}
	}

}
void sales(int & small, int & medium, int & large)
{


	cout << "Please read the menu, and select the number " << endl;
	cout << "of each size of coffee that you would like to " << endl;
	cout << "purchase.  If you would not like to purchase a certain " << endl;
	cout << "size of coffee, please enter '0'." << endl << endl;
	cout << "Small Cup........................ $" << showpoint << setprecision(3) << SMALL_CUP_COST << endl;
	cout << "Medium Cup....................... $" << showpoint << setprecision(3) << MEDIUM_CUP_COST << endl;
	cout << "Large Cup........................ $" << showpoint << setprecision(3) << LARGE_CUP_COST << endl;
	cout << "Please enter the number of small cups you would like to purchase: ";
	cin >> small;
	cout << endl;
	cout << "Please enter the number of medium cups you would like to purchase: ";
	cin >> medium;
	cout << endl;
	cout << "Please enter the number of large cups you would like to purchase: ";
	cin >> large;
	cout << endl;
}
void sizesSold(int & small, int & totalSmall, int & medium, int & totalMedium, int & large, int & totalLarge)
{

	totalSmall = totalSmall + small;
	totalMedium = totalMedium + medium;
	totalLarge = totalLarge + large;

	cout << "Number of small cups of coffee sold: " << totalSmall << endl;
	cout << "Number of medium cups of coffee sold: " << totalMedium << endl;
	cout << "Number of large cups of coffee sold: " << totalLarge << endl;
}
void totalCupsSold(int & totalSmall, int & totalMedium, int & totalLarge)
{
	int totalCoffeeSold = totalSmall + totalMedium + totalLarge;
	cout << "The total number of coffee cups sold is: " << totalCoffeeSold << endl;
}
void totalSales(int & totalSmall, int & totalMedium, int & totalLarge)
{
	double moneyMade = (SMALL_CUP_COST * totalSmall) + (MEDIUM_CUP_COST * totalMedium) + (LARGE_CUP_COST * totalLarge);
	cout << "Total Sales are: " << showpoint << moneyMade << endl;
}