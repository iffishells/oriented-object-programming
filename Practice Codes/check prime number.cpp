#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void checkprime(){
	int i ,number;
	bool flag=false;
	cout<<"Enter the prime number : ";
	cin>>number;
	for( i = 2 ; i<=number/2 ; i++){
		if(number%i==0){
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<"this is the prime number ; "<<number<<endl;
	}
	else{
		cout<<"this is not prime number : "<<number<<endl;
	}	
}




int main(){
	
	checkprime();
}
