//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 3
//
//Description: vowelcount
//
//Program: vowel.cpp
//
// Program counts Y as a vowel
//
//Complete Date: 13 November, 2016
//
//Developed: Using Microsoft Visual Studio Community 2015
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string str;

	int count = 0;

	cout << "Please input a string: " << endl;

	cin >> str;

	// runs for how many letters in the string
	for (int i = 0; i < str.length(); i++)
	{
		//compare each letter 
		if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u' || str.at(i) == 'y')
		{
			count = count++;
		}
	}

cout << "There are " << count << " lowercase vowels in your input." << endl;

return 0;
}