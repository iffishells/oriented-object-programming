#include<iostream>
#include<string>
using namespace std;

class Employee{
	public:
	string firstname;
	string lastname;
	
	void sign_in();
	void sign_on();
};
void Employee::sign_in(){
	string firstname;
	s
		cout<<"Enter the first Name ; ";
		cin>>firstname;
	string lastname;
		cout<<"Enter the last Name  : ";
		cin>>lastname;
	
	string phone_number;
		cout<<"Enter the phone number  : ";
		cin>>phone_number;
	string email;
		cout<<"Enter the email : ";
		cin>>email;
	string password;
		cout<<"Enter the password as your want ! : ";
		cin>>password;
	string like_colour;
		cout<<"Enter your secret question(like favourite colour) : "<<endl;
		cin>>like_colour;
		
	cout<<"------------overall save data -----------------------"<<endl;
	cout<< "firs Name : "<<
	cout<<"success to sign in the facebook account  "<<endl;
}
void Employee::sign_on(){
	cout<<"failed to sign out the facebook account "<<endl;
}
int main(){
	Employee s1;
	string name1,name2;
	cout<<"Enter the first Name ! "<<endl;
	cin>>name1;
	s1.firstname=name1;
	cout<<"Enter the last Name ! "<<endl;
	cin>>name2;
	s1.lastname=name2;
	s1.sign_in();
	return 0;
}
