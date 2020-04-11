#include<iostream>
#include<cmath>
#include<cstring>
#include<math.h>
using namespace std;

void armstrongnumber(){
	int lastdigits,digits,num,i,orignalnumber;
	int sum;
	sum=0;
	cout<<"Enter the Number : ";
	cin>>num;
	orignalnumber=num;
	digits= (int) log10(num) + 1;
	
	while(num>0){
		lastdigits=num%10;
		sum=sum+round(pow(lastdigits,digits));
		
		
		
		num=num/10;
	}
	cout<<sum<<endl;
	if(orignalnumber==sum){
		
		cout<<" this is armstrong number : "<<endl;
	}else{
		cout<<"this is not armstrong number : "<<endl;
	}
}




int main(){
	
	armstrongnumber();
}
