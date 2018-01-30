#include <iostream>
using namespace std;

int x;

void summer (int&, int);
void fall (int, int&);

int main()
{
	int intNum1 = 2;
	int intNum2 = 5;
	x = 6;

	summer(intNum1, intNum2);
	cout << intNum1 << " " << intNum2 << " " << x << endl;

	fall (intNum1, intNum2);
	cout << intNum1 << " " << intNum2 << " " << x << endl;
	return 0;
}

void summer (int& a, int b)
{
	int intNum1;
	intNum1 = b +12;
	a = 2 * b +5;
	b = intNum1 + 4;
}

void fall (int u, int& v)
{
	int intNum2;
	intNum2 = x;
	v = intNum2 *4;
	x = u - v;
}