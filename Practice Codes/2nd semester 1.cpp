#include<iostream>
#include<stdio.h>
using namespace std;
int switchh (){
	//const int number ;
	//char number;
	int number;
	cout<<"enter the number which you want to gain "<<endl;
	cin>>number;
	switch (number){
		case 'f':
		cout<<"number is 4"<<endl;
			break;
		case 3:
			cout<<"number is 3"<<endl;
			break;
		case 5:
			cout<<"number is 5"<<endl;
			break;
		case 6:
			cout<<"number is 6"<<endl;
			break;
		case 7:
			cout<<"number is 7"<<endl;
			break;
		default :
			cout<<"number is not here"<<endl;
	}
}
void showmenu(){
	cout<<"1 : searching"<<endl;
	cout<<"2 : recording " <<endl;
	cout<<"3 : quite "<<endl;
	
}
void processsingmenu(){
	cout<<"DO you want to show the menu" <<endl;
	cout<<"eneter the number :"<<endl;
	int value ;
	cin>>value;
	
	switch (value){
		case 1:
		cout<<"1 : searching"<<endl;
		break;
		case 2:
			cout<<"2 : recording " <<endl;
			break;
		case 3:
			cout<<"quitting"<<endl;
		default :
			cout<<"your eequuest is not answerable"<<endl;
		
		
	}
}
void pointer_test(){
	int x=26;
	cout<<"value of addres of x: "<< &x <<endl;
	cout<<"the value of x itself "<<x<<endl;
	int *p;
	p=&x;
	cout<<"value of addres pointed by the p: "<< *p<<endl;
	cout <<"the value of p itself " << p <<endl;
}



int main(){
	//switchh();
	
	//showmenu();
	//processsingmenu();
	pointer_test();
}
