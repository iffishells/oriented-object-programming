#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void armstrong(){
	int lastdigit,num,sum,digits;
	cout<<"Enter the Number : ";
	cin>>num;
	int orignalvalue;
	orignalvalue=num;
	digits=(int) log10(num) + 1;
	cout<<digits<<endl;
	sum=0;
	//int i;
	while(num>0){
		lastdigit=num %10;
		sum=sum+round(pow(lastdigit,digits));
		cout<<"in loop : sum "<<sum<<endl;
		num=num/10;
	}
	if(orignalvalue==sum){
		cout<<"this is the armstrong  "<<endl;
	}
	else{
		cout<<"this is not armstrong "<<endl;
	}
	
}




int main(){
	armstrong();
}
