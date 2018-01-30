#include <iostream>

using namespace std;

int main(){


    int cookie;
    cout << "Please input the total number of cookies." << endl;
    cin >> cookie;
    int box = cookie / 24;
    cout << "It will take " << box << " boxes to hold the cookies." << endl;
    int container = box / 75;
    cout << "It will take " << container << " containers to hold the boxes." << endl;
    return 0;
    }