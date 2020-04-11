#include<iostream>
#include<string>
using namespace std;

class clcok 
{
	public:
		
	virtual	void fun()
		{
			cout<<" fun funtion of class clock has been called  " <<endl;
		}
};
class  stopwatch : public clcok
{
	public:
		void fun()
		{
			cout<< " fun funtion of clclcokss stopwatchlcoks  been called "<<endl;
		}
};
class Alaramclock : public clcok
{
	public:
		void fun()
		{
			cout<< " fun funtion of class Alaramclock has been called  " <<endl;
		}
};
 clcok *selectfun();
int main()
{
	clcok *ptr;
	ptr=selectfun();
	ptr->fun();
}

clcok *selectfun()
{
	string name="stopwatch";
	clcok *ptr;
	if(name=="stopwatch")
		ptr=new stopwatch;
	else
	ptr = new Alaramclock;
	
	return ptr;
}

