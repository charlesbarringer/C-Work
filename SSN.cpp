#include <iostream>
#include <string>

using namespace std;

int main()
{
	int counter;
	string name,ssn,userid,password;
	
	cout <<"Enter Name: ";
	getline (cin, name);

	cout << "Please Enter SSN (no spaces required): ";
	cin >> ssn;

	cout << "Please Enter User ID: ";
	cin >> userid;

	cout << "Please Enter password: ";
	cin >> password;

	cout << endl;

	cout << "Name: " << name <<endl;
	cout << "SSN:  xxx-xx-xxxx"<<endl;
	cout << "User ID: ";
	for(counter=0; counter<userid.length(); counter++)
	{
		cout << "x";
	}
	cout << endl;
	cout << "Password: ";
	for(counter=0; counter<password.length(); counter++)
	{
		cout << "x";
	}

	cout << endl;

system("Pause");
return(0);
}
