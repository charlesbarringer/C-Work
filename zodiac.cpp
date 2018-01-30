//------------------------------------------------------
//Student: Charles Barringer
//
//Assignment: Lab 3
//
//Description: Zodiac Signs
//
//Program: zodiac.cpp
//
//Complete Date: 7 November, 2016
//
//Developed: Using Microsoft Visual C++ Express 2010
//
//------------------------------------------------------
//-- C++ header files --
//------------------------------------------------------
#include <iostream>

using namespace std;

int main() {


	int month;
	int date;
	cout << "Please input your birth month in numbers." << endl;
	cin >> month;
	cout << "Please input your birth day in number." << endl;
	cin >> date;
	switch (month) {
	case 1: {
		if (date >= 1 && date <= 19) {
			//zodiac = capricorn
			cout << "Your zodiac sign is Capricorn." << endl;
		}
		else if (date >= 20 && date <= 31) {
			//zodiac = Aquarius
			cout << "Your zodiac sign is Aquarius." << endl;
		}
	}
			break;
	case 2:
		if (date >= 1 && date <= 18) {
			//zodiac = Aquarius
			cout << "Your zodiac sign is Aquarius." << endl;
		}
		else if (date >= 19 && date <= 29) {
			//zodiac = Pisces
			cout << "Your zodiac sign is Pisces." << endl;
		}
		break;
	case 3: {
		if (date >= 1 && date <= 20) {
			//zodiac = Pisces
			cout << "Your zodiac sign is Pisces." << endl;
		}
		else if (date >= 21 && date <= 31) {
			//zodiac = Aries
			cout << "Your zodiac sign is Aries." << endl;
		}
	}
			break;
	case 4: {
		if (date >= 1 && date <= 19) {
			//zodiac = Aries
			cout << "Your zodiac sign is Aries." << endl;
		}
		else if (date >= 20 && date <= 30) {
			//zodiac = Taurus
			cout << "Your zodiac sign is Taurus." << endl;
		}
	}
			break;
	case 5: {
		if (date >= 1 && date <= 20) {
			//zodiac = Taurus
			cout << "Your zodiac sign is Taurus." << endl;
		}
		else if (date >= 21 && date <= 31) {
			//zodiac = Gemini
			cout << "Your zodiac sign is Gemini." << endl;
		}
	}
			break;
	case 6: {
		if (date >= 1 && date <= 21) {
			//zodiac = Gemini
			cout << "Your zodiac sign is Gemini." << endl;
		}
		else if (date >= 20 && date <= 30) {
			//zodiac = Cancer
			cout << "Your zodiac sign is Cancer." << endl;
		}
	}
			break;
	case 7: {
		if (date >= 1 && date <= 22) {
			//zodiac = Cancer
			cout << "Your zodiac sign is Cancer." << endl;
		}
		else if (date >= 23 && date <= 31) {
			//zodiac = Leo
			cout << "Your zodiac sign is Leo." << endl;
		}
	}
			break;
	case 8: {
		if (date >= 1 && date <= 22) {
			//zodiac = Leo
			cout << "Your zodiac sign is Leo." << endl;
		}
		else if (date >= 23 && date <= 31) {
			//zodiac = Virgo
			cout << "Your zodiac sign is Virgo." << endl;
		}
	}
			break;
	case 9: {
		if (date >= 1 && date <= 22) {
			//zodiac = Virgo
			cout << "Your zodiac sign is Virgo." << endl;
		}
		else if (date >= 23 && date <= 30) {
			//zodiac = Libra
			cout << "Your zodiac sign is Libra." << endl;
		}
	}
			break;
	case 10: {
		if (date >= 1 && date <= 22) {
			//zodiac = Libra
			cout << "Your zodiac sign is Libra." << endl;
		}
		else if (date >= 23 && date <= 31) {
			//zodiac = Scorpio
			cout << "Your zodiac sign is Scorpio." << endl;
		}
	}
			 break;
	case 11: {
		if (date >= 1 && date <= 22) {
			//zodiac = Scorpio
			cout << "Your zodiac sign is Scorpio." << endl;
		}
		else if (date >= 23 && date <= 30) {
			//zodiac = Sagittarius
			cout << "Your zodiac sign is Sagittarius." << endl;
		}
	}
			 break;
	case 12: {
		if (date >= 1 && date <= 21) {
			//zodiac = Sagittarius
			cout << "Your zodiac sign is Sagittarius." << endl;
		}
		else if (date >= 22 && date <= 31) {
			//zodiac = Capricorn
			cout << "Your zodiac sign is Capricorn." << endl;
		}
	}
			 break;
	}
	return 0;
}
