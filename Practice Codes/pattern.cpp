#include<iostream>
using namespace std;


class a
{
	public:
		a()
		{
			cout<<" constuctr of a class " <<endl;
		}
		~a()
		{
			cout<<" deconstuctr of a class " <<endl;
		}
};
class b
{
	public:
		b()
		{
			cout<<" constuctr of b class " <<endl;
		}
		~b()
		{
			cout<<" deconstuctr of b class " <<endl;
		}
};
class c:public a ,b
{
	public:
		c()
		{
			cout<<" constuctr of c class " <<endl;
		}
		~c()
		{
			cout<<" decostuctr of c class " <<endl;
		}
};
int main(){
	c l;
}
