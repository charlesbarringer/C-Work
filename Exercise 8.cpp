#include<iostream>
#include<string>
#include <sstream>

using namespace std;

int main(){
	string s;
	string arr[4];
	cout<<"please enter the string"<<endl;
	getline(cin,s);
	int i = 0;
    stringstream ssin(s);
    
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }
    
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
	int j=0;
	for(;j<arr[1].length();j++){
		if(arr[1].at(j)!='-'){
			arr[1].at(j)='x';
		}
	}
	int k=0;
	for(;k<arr[3].length();k++){
		arr[3].at(k)='x';
	}
	
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
	return 0;
}

