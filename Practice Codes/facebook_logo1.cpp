#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void facebook_logo(){
	string fname,lname,pass,email,phone;
	cout<<"Enter first name : " ;
	cin>>fname;
	if(fname.size()>=5 && fname.size()<=8){
		cout<<"correct"<<endl;
	}else{
		cout<<"not correct try again : " <<endl;
		
	}
	cout<<"enter last name : "<<endl;
	cin>>lname;
	if(lname.size()>=5 && lname.size()<=8){
		cout<<"correct"<<endl;
	}else{
		cout<<"your last name is wrong "<<endl;
	}
	cout<<"Enter the email : ";
	cin>>email;
	//char found=email
	if(email.find('@')){
		cout<<"correct"<<endl;
	}else{
		cout<<"wrong " <<endl;
	}
}

int main(){
	facebook_logo();
}
