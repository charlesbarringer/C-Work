#include <iostream>

using namespace std;

int main()
{

    int account;
    string code;
    int minutes;
    cout << "Please input your account number." << endl;
    cin >> account;
    cout << "Please input your service code." << endl;
    cin >>  code;
    cout << "Please input the number of minutes used." << endl;
    cin >> minutes;
    if (code == "r" or code == "R") {
        int charges = (minutes - 50) * 0.20;
        cout << "You have our regular service. Your account number is " << account << ", you used " << minutes << "and your total charges are " << charges << "." << endl;
        }
    else if (code == "p" or code == "P") {
        int amcharges;
        int pmcharges;
        int amminutes;
        int pmminutes;
        cout << "Please input the minutes you used from 6am to 6pm." << endl;
        cin >> amminutes;
        cout << "Please input the minutes you used from 6pm to 6am." << endl;
        cin >> pmcharges;
        int pcharges = ((amcharges = (amminutes - 75) * 0.10) + (pmcharges = (pmminutes - 100) * 0.05));
        cout << "You have our premium service. Your account number is " << account << ", you used " << minutes << "and your total charges are " << pcharges << "." << endl;
        }
     return 0;
     }