#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> l1;
	for(int i=0 ; i <= 5 ; i++)
	{
		l1.push_back(i);
	}
	cout<< "  begin to end " <<endl;
	cout<< " {";
	for(auto i=l1.begin() ; i!=l1.end() ; i++)
	{
		cout<< *i<< " ";
	}
	cout<<" }";
	cout<<endl;
	cout<< " reverse order  " <<endl;
	cout<< " {";
	for(auto i=l1.rbegin() ; i!=l1.rend() ; i ++)
	{
		cout<<*i<< " ";
	}
	cout<< " } ";
	cout<<endl;
	cout<< " In a different way " <<endl;
	cout<< " {";
	for(auto i=l1.crbegin() ; i!=l1.crend() ; i ++)
	{
		cout<<*i<< " ";
	}
	cout<< " } ";
	cout<<endl;
	
	///////////////////////////////////////
	//////////////////////////////////////
	//////////////////////////////////////
	cout<< " Size  : " << l1.size()<<endl;
	cout<< " Capacity  : " <<l1.capacity()<<endl;
	cout<< " Max SIze : "<<l1.max_size()<<endl;
	
	// resize the vectos
	
	cout<< " After resizing the vectors "<<endl;
	l1.resize(2);
	cout<< " resize  = Size  : " <<l1.size()<<endl;
	
	cout<< " {";
	for(auto i=l1.begin() ; i!=l1.end() ; i++)
	{
		cout<< *i<< " ";
	}
	cout<<" }"<<endl;
	
	if(l1.empty()==false)
	{
		cout<< " vector is Full  " <<endl;
	}
	else
	{
		cout<< " vector is NULL " <<endl;
	}
	
	
	
	
	
	
	
}
