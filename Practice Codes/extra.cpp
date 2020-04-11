#include<iostream>
#include<string>
using namespace std;

void extra(){
	//getline(cin,variable )
	//concatination
	//.append(string)
	string first;
	cout<<"Enter the name : ";
	cin>>first;
	//getline(cin,first);
	//first+=" ";
	cout<<"Enter last name :";
	string last;
	cin>>last;  
	//string name= first + " " + last;
	
	
	cout<< " hellow " <<first.append(last) << " welcome to this video"<<endl;
	//cout<<"first at "<<first.at(4)<<endl;   
}
void extra1(){
	string playername, favfood;
	int age=0;
	cout<<"Enter the name :";
	//cin>>playername;
	getline(cin,playername);
	cout<<"what is your age : ";
	cin>>age;
	cin.ignore(1);
	cout<<"what is your favourite food ";
	cin>>favfood;
	cout<<"welcome to the game "<<playername<<". "<<"fihf dhhfe fojefef "<<favfood<<age<<endl;
}
void  pointer(){
	int nvalue=9;
	int* pnvalue=&nvalue;
	cout<<"nvalue "<<nvalue<<endl;
	cout<<"pointer to int addres : "<<pnvalue<<endl;
	cout<<"int vaalue to via pointer : "<<*pnvalue<<endl;
	
	
}
int main(){
	//extra();
	//extra1();
	pointer();
}






 










