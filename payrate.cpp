#include <iostream>

using namespace std;

int main(){
    int hoursworked;
    int payrate;
    cout << "How many hours did you work? "<<endl;  
    cin >> hoursworked;
    cout << "How much were you paid per hour? "<<endl;
    cin >> payrate;
    int beforetax = hoursworked * payrate;
    int aftertax = beforetax * 0.86;
    int clothes = aftertax * 0.10;
    int school = aftertax * 0.01;
    int remaining = aftertax - clothes - school;
    int savings = remaining * 0.25;
    int parents = savings * 0.50;
    cout << "You made $" << beforetax << " before taxes."<< endl;
    cout << "You made $" << aftertax << " after taxes."<< endl;
    cout << "You spent $" << clothes << " on clothes."<< endl;
    cout << "You spent $" << school << " on school supplies." << endl;
    cout << "You put $" << savings << " into savings bonds." << endl;
    cout << "Your parents put $" << parents << " into savings bonds for you." << endl;
    return 0;
}

