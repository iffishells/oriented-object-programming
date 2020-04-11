#include<iostream>
#include<fstream>
using namespace std;
void fun()
	{
	int arry[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arry;
	for(int i=0 ; i<10 ; i++)
	{
		cout<<*p<<endl;
		p++;
	}
	
	}

int main()
{
	fun();
	
}
