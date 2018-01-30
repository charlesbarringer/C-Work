#include<iostream>
#define SMALL 1.75
#define MEDIUM 1.90
#define LARGE 2.0
using namespace std;

int display(){
	int i=0;
	cout<<"1. Buy coffee in any size and any number of cups"<<endl;
	cout<<"2. Show total number of cups of each size sold"<<endl;
	cout<<"3. Show total amount of coffee sold"<<endl;
	cout<<"4. Show total money made"<<endl;
	cin>>i;
	return i;
}

void sell_coffee(int *smallcups,int *mediumcups,int *largecups){
	cout<<"1.smallcup\n2.mediumcup\n3.largecup"<<endl;
	int num;
	cin>>num;
	cout<<"how many of cups wanted?"<<endl;
	int count=0;
	cin>>count;
	if(num==1)
		*smallcups+=count;
	else if(num==2)
		*mediumcups+=count;
	else if(num==3)
		*largecups+=count;
	else{
	}
	
	
}

void displaycups_count(int smallcups,int mediumcups,int largecups){
	cout<<"smallcups = "<<smallcups<<" mediumcups = "<<mediumcups<<" largecups = "<<largecups<<endl;	
}

void display_coffee_ammount(int smallcups,int mediumcups,int largecups){
	int size=0;
	size+=smallcups*9 + mediumcups*12 + largecups*15;
	cout<<size<<"oz"<<endl;
}

void money_made(int smallcups,int mediumcups,int largecups ){
	double money=0.0;
	money+=smallcups*SMALL + mediumcups*MEDIUM + largecups*LARGE;
	cout<<money;
}
int main(){
	
	int smallcups=0,mediumcups=0,largecups=0;;
	int total_money=0;
	while(1){
	
	int num=display();
	if(num==1){
		sell_coffee(&smallcups,&mediumcups,&largecups);
	}
	else if(num==2){
		displaycups_count(smallcups,mediumcups,largecups);
	}
	else if(num==3){
		display_coffee_ammount(smallcups,mediumcups,largecups);
	}
	else if(num==4){
		money_made(smallcups,mediumcups,largecups);
	}
	else{
		
	}
	char c='y';
	cout<<"press 'n' to break or Any other key to continue"<<endl;
	cin>>c;
	if(c=='n')
		break;
	
	}
	return 0;
}
