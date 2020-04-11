#include<iostream>
using namespace std;
#define 	INCLUDE_INVERTORY_MODULE

//#ifdef 		INCLUDE_INVERTORY_MODULE
void show_invertory(){
	cout<<"Showing the inventory "<<endl;
}
#endif

#define SIZE 5
#define ABS(a)((a)<0 ? -(a) : a)
int main(){
	cout<<"Hellow world! "<<endl;
	for(int i=0 ; i<SIZE ; i++){
		cout<<i<<endl;
	}
	cout<<"SIZE"<<endl;
	
	cout<<"ABS(value) "<<ABS(-55)<<endl;
	#ifdef 		INCLUDE_INVERTORY_MODULE
	show_invertory();
	#endif
}

