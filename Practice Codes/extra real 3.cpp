#include<iostream>
#include<string>
using namespace std;

void manipulating(double *pvalue){
	
	cout<<" 2.value of double  in manipulating : "<<*pvalue<<endl;
	*pvalue =10.0;
	cout<<"3  .value of double  in manipulating : "<<*pvalue<<endl;
	
	
}
void stringg(){
	string s=" i am a boy";
	for(int i=0;  i<s.size() ; i++){
		if(s[i]=='b'){
			cout<<"yes"<<endl;
		}else
		{
			cout<<"not"<<endl;
		}
	}
}





int main()


{ 
     stringg();
	/*int nvalue=9;
	int* pnvalue=&nvalue;
	// *pnvalue=6
	cout<<"nvalue : "<<nvalue<<endl;
	cout<<"pointer to int addres : "<<pnvalue<<endl;
	cout<<"int value to via pointer : "<<*pnvalue<<endl;
	cout<<"-----------------------"<<endl;
	double dvalue=123.4;
	cout<<"1 .dvalue : "<<dvalue<<endl;
	manipulating(&dvalue);
	cout<<"2 .dvalue "<<dvalue<<endl;*/
	
	
	return 0;
}     
