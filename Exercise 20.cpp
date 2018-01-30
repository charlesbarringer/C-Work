#include<iostream>
#include<string>

using namespace std;

int count(string s){
	int i=0,count=0;
	for(;i<s.length();i++){
		if(s.at(i)=='a' || s.at(i)=='e'|| s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'){
			count++;
		}
	}
	return count;
}
int main(){
	
	string s;
	cin>>s;
	cout<<count(s);
	return 0;
}
