#include<iostream>
#include<cmat>
using namespace std;
int main(){
	int arms;
	//bool pass=false;
	cout<<"Enter the digit : "<<endl;
	cin>>arms;
	int saved;
	saved=arms;
	int funtion;
	int count=0;
	int digit;		
		while(arms!=0){
		digit=arms%10;
		funtion=pow(digit,3);
		count=count+funtion;
	
		//cout<<"digit  "<<last_digit<<endl;
		arms=arms/10;
		//cout<<"funtion : "<<funtion<<endl;
	}
	//cout<<"count : "<<count<<endl;
	if(count==saved){
		cout<<"This is the armstrong number : "<<count<<endl;	
	}else{
		cout<<"This is not armstrong number : "<<count<<" "<<endl; 
	}
}




