//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 12
//
//Description: Plane Seating
//
//Program: Airplane.cpp
//
//Complete Date: 25 November, 2016
//
//Developed: Using Microsoft Visual Studio Community 2015
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------
#include<iostream>
#include<cctype>
#include<iomanip>

using namespace std;

void getData(char& ticketType, int& row,
	char& column);
void printForm(char form[][6], int row, char column);

int main()
{
	//initialize variables
	char ch, ticketType, column;
	int row;
	char form[13][6];

	//nested loop
	for (int i = 0; i < 13; ++i)
		for (int j = 0; j < 6; ++j)
			form[i][j] = '*';

	cout << "This program assigns seats for a plane.\n"
		<< "Do you want to start now? Y/y for yes, N/n for no." << endl;
	cin >> ch;

	ch = static_cast<char>(toupper(ch));
	while (ch == 'Y')
	{

		getData(ticketType, row, column);
		printForm(form, row, column);

		cout << "This program assigns seats for a plane.\n"
			<< "Do you want to start now? Y/y for yes, N/n for no." << endl;
		cin >> ch;
		ch = static_cast<char>(toupper(ch));
		if (ch == 'N')
			return 0;
	}  
	system("PAUSE");
	return 0;
}

void getData(char& ticketType, int& row, char& column)
{

	cout << "The airplane has 13 rows, with  six seats in each row. " << endl;

	cout << "Enter ticket type,\n"
		<< "F for first class, \n"
		<< "B for business class,\n"
		<< "E for economy class:" << endl;
	cin >> ticketType;
	ticketType = static_cast<char>(toupper(ticketType));
	while (ticketType != 'F' && ticketType != 'B' && ticketType != 'E')
	{
		cout << "Invalid ticket type." << endl;
		cout << "Enter ticket type,\n"
			<< "F/f for first class, \n"
			<< "B/b for business class,\n"
			<< "E/e for economy class:" << endl;
		cin >> ticketType;
		ticketType = static_cast<char>(toupper(ticketType));
	}
	switch (ticketType)
	{
	case 'F':
		cout << "Row 1 and 2 are first class,\n";
		break;
	case 'B':
		cout << "row 3 throuh 7 are business class,\n";
		break;
	case 'E':
		cout << "row 8 through 13 are economy class." << endl;
		break;
	}

	cout << "Enter the row number you want to sit: " << endl;
	cin >> row;

	cout << "Enter the seat number (from A to F). " << endl;
	cin >> column;
	column = static_cast<char>(toupper(column));
}

void printForm(char form[][6], int row, char column)
{
	int i, j;

	cout << "* indicates that the seat is available; " << endl;
	cout << "X indicates that the seat is occupied. " << endl;
	cout << setw(12) << "A" << setw(6) << "B" << setw(6) << "C"
		<< setw(6) << "D" << setw(6) << "E" << setw(6) << "F" << endl;

	
	form[row - 1][column - 65] = 'X';

	   
	for (i = 0; i < 13; i++)
	{
		cout << left << setw(3) << "Row " << setw(2) << i + 1;
		for (j = 0; j < 6; j++)
		{
			cout << right << setw(6) << form[i][j];
		}
		cout << endl;
	}
}