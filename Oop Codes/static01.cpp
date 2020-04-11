#include<iostream>
#include<string>
using namespace std;

class student
{
	private:
		int id;
		static int next_id;
	public:
		student()
		{
			id=student::set_id();
		}
		static void set_id()
		{
			id=next_id++;
			return id;
		}
};

int main()
{

}