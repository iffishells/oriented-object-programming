#include<iostream>
#include<string>
using namespace std;


void sum_digits(int number){
	int lenght;
	int number1;
	int sum;
	for(lenght =0 ; number>0 ; lenght++){
		
		number1=number%10;
		
		sum=sum+number1;
		number=number/10;
	}
	cout<<lenght<<endl;
	cout<<sum<<endl;
}




int main(){
	
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	sum_digits(number);
	
	
}
