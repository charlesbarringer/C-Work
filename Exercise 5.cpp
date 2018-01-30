#include<iostream>

using namespace std;

bool married=false;
int num_of_children=0;
int percentage=0;
int gross_income=0;
int taxable_income=0;
int tax_owed=0;

void getData(){
	cout<<"if married then press 'y' else press 'n'"<<endl;
	char in;
	cin>>in;
	if(in=='y'){
		cout<<"number of children : "<<endl;
		cin>>num_of_children;
	}
	
	cout<<"Enter the gross salary : "<<endl;
	cin>>gross_income;
	
	cout<<"Enter the percentage of gross income to be conntributed to pension : "<<endl;
	cin>>percentage;
	
	if(in=='y'){
		taxable_income = gross_income - (2+num_of_children)*1500 - 7000 - ((percentage*gross_income)/100); 

	}
	else{
		taxable_income = gross_income - 1500 - 4000 - ((percentage*gross_income)/100); 
	}
	
}

int taxAmount(){
	if(taxable_income>0 && taxable_income<=15000){
		tax_owed=((15*taxable_income)/100);
	}
	else if(taxable_income>15000 && taxable_income<=40000){
		tax_owed=2250 + ((25*(taxable_income-15000))/100);
	}
	else if(taxable_income>40000){
		tax_owed = 8460 + ((35*(taxable_income-40000))/100);
	}
	else{
		
	}
	return tax_owed;
}
int main(){
	getData();
	cout<<taxAmount();
	return 0;
}
