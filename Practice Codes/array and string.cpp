#include<iostream>
#include<string>
using namespace std;

void arry(){
	int foo[5];
	foo[0]=24;
	int counter;
	counter=0;
	cout<<"before the assignment "<<endl;
	//int i=0;
	for(int i=0;i<6 ; i++){
		cout<<foo[i]<<" ";
	}
	cout<<endl;
	//cout<<foo[i]<<endl;
	//cout<<"after the assignment "<<endl;
	for(int i=0; i<6 ; i++){
		foo[i]=0;
		cout<<foo<<" "<<endl;
	}
	cout<<"after the assignment "<<endl;
	for(int i=0; i<6 ;i++){
		//counter=counter+1;
		cout<<foo[i]<<" "<<endl;
		//counter=counter+1;
	}
	//counter=counter+1;
	cout<<endl;
}
void arry_test2D(){
	int val[2][3];
	for(int i=0; i<2 ;i++)
	{
		for(int j=0; j<3 ; j++)
		{
			cout<<val[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//cout<<"aFter the assignment "<<endl;
	int value=1;
	for(int i=0; i<2; i++){
		for(int j=0; j<3 ; j++){
			val[i][j]=value;
			value=value+1;
			//cout<<value<<endl;
		}
	}
	cout<<"after the assignment  "<<endl;
	for(int i=0; i<2 ; i++){
		for(int j=0 ; j<3 ; j++){
			cout<<val[i][j]<<" ";
		}
		 cout<<endl;
	}
	}
	
void string_test(){
	
	//cout<<hellow[1]<<endl;
	//cout<<"at 1 position :"<<hellow[1]<<endl;
	//cout<<"at 2 position :"<<hellow[2]<<endl;
	//cout<<"at 3 position : "<<hellow[3]<<endl;
	//cout<<"at 4 position :"<<hellow[4]<<endl;
	//cout<<"at 5 position : "<<hellow[5]<<endl; //array has no output at the the -1 ,-2 - value
	//cout<<"at -1 position :"<<hellow[-1]<<endl;
	//cout<<"at -2 position :"<<hellow[-2]<<endl;
	//cout<<count<<endl;
	char name[] = "iftikhar";
	//cout<<"the value of name at 4 position :"<<name[1]<<endl;
	//cout<<name.lenght()<<endl; not heppend
	//by using for loop to excess the all element in the arry
	int i=0;
	int count=0;
	int count1=0;	
	for( i; i<8 ;i++)
	{
		count=count+1;
		cout<<"number of elemnt in the array :"<<name[i]<<" "<<endl;
		if(name[i]=='i')	
		count1+=1;
	}
	cout<<"total number of the element :"<<count<<endl;
	cout<<"total number of the element of i  :"<<count1<<endl;
	
	cout<<"------------------------------------------------------------------------------"<<endl;
	string name1="muhammad iftikhar";
	cout<<"total number of the element :"<<name1.length()<<endl;
	cout<<"the position of i is  :"<<name1.find('i')<<endl;
	cout<<name1.find_last_not_of('@')<<endl;
	//cout<<name1.find_last_not_of('/0')<<endl;
	cout<<"-------------close-------------------"<<endl;
	string str="Norma";
		cout<<"in the str :"<<str<<endl;
		cout<<"the lenght of the norma : " <<str.length()<<endl;
		cout<<"the value of the str at str[0] : "<<str[3]<<endl;
cout<<"------------------------- by usig for loop : ---------------------------------------"<<endl;
	int z=0;
	for(z ; z<str.length() ; z++){
		cout<<str[z]<<" ";
	}
	cout<<endl;
cout<<"-------------------------by using while loop :---------------------------------------"<<endl;
	
	}
	
	
cout<<"-----------------struct-----------------------------"<<endl;
	
struct student
	{
		int rollno;
		float marks;
	
	};
void struct_test(){
	student s1;
	student s2;
	s1.rollno=180054;
	s1.rollno=180056;
	s1.marks=54.5;
	s1.marks=65.5;
	cout<<" the s1.rollno has "<<s1.rollno<< " marks "<<endl;
	cout<<" the student 1 has "<<s1.marks<<" marks "<<endl;
	cout<<"the student 1 has"<<s1.rollno<<" roll number "<<endl;
	cout<<"the student 1 has "<<s1.marks<<" marks "<<endl;
}

int main(){
	//arry();
	//arry_test2D();
	struct_test();
	//string_test();
	
}
