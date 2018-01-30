#include <iostream>

using namespace std;

#include <tgmath.h>


	int main(){

	int totalproduced;
    
	cout<<"How many liters of milk were produced? ";
    	
	cin>> totalproduced;
    
	int numCartons = totalproduced / 3.78;
    
	numCartons = round(numCartons);
    
	int cost = totalproduced * .38;
    
	int profit = totalproduced * .27;
    
	cout << "You will need "<< numCartons <<" cartons to hold the milk."<< endl;
    
	cout << "The cost of this amount of milk is " << cost << " dollars." << endl;
    
	cout << "The profit on this amount of milk is " << profit << " dollars." << endl;
    return 0;

}