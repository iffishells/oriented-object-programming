#include <iostream>
#include<string>
using namespace std;
class ExampleEncap{
private:
	int num;
	char ch;
	// this data is not accessible outside the class on
	// way to get this member thruogh the setter and getter
	// funtion
public:
	int getnum()const{
		return num;
	}
	int getch()const{
		return ch;
	}
	//setter funtion they are called for 
	// for assigning the value 
	// to the priavte data member 
	void setnum(int num){
		this->ch=ch;
		ch=ch;
	}
	void setch(char ch){
		this->num=num;
		//num=num;


	}
};
int main(){
	ExampleEncap obj;
	obj.setch('A');
	obj.setnum(1000);
	cout<<"obj.getnum"<<endl;
	cout<<"obj.getch : "<<obj.getch<<endl;
	return 0;
}