#include<iostream>
#include<string>
#include<fstream>
#include <algorithm>
using namespace std;
void sort_data();
struct Employee{
	string firstname;
	string lastname;
	string fathername;
	int emp_number;
	string blood_group;
	int emp_age;
	string factory_name;
	string deparment;
	int phone_number;
	string email;
	string homeaddress;
	double  salaries[4];
	
};
void swap(Employee s1 ,Employee s2){
	Employee temp;
	temp=s1;
	s1=s2;
	s2=temp;
		
	
}
		


int main(){
	Employee s1[9],temp,temp1,s2;
	//swap(s1,s2);
	ifstream in;
		in.open("inputt.txt");
		if(in.is_open())
		{
			cout<<"file opening is successfull "<<endl;
		}	
		else
	
		{
			cout<<"file is not open : try again! "<<endl;
		}
	int i=0;
		while(in){
			in>>s1[i].firstname;
			in>>s1[i].lastname;
			in>>s1[i].fathername;
			in>>s1[i].emp_number;
			in>>s1[i].blood_group;
			in>>s1[i].emp_age;
			in>>s1[i].factory_name;
			in>>s1[i].deparment;
			in>>s1[i].phone_number;
			in>>s1[i].email;
			in>>s1[i].homeaddress;
		
	for(int j = 0 ; j<4 ; j++)
	{
		in>>s1[i].salaries[j];
		
	}
		i++;
	}
	in.close();
	
	cout<<" bedore sorting the array "<<endl;
	for(int  p = 0 ; p<9; p++){
		cout<<"	"<<s1[p].firstname<<" "<<s1[p].lastname<<" "<<s1[p].fathername<<" "<<s1[p].emp_number<<" ";
		cout<<s1[p].blood_group<<" "<<s1[p].emp_age<<" "<<s1[p].factory_name<<" ";
		cout<<s1[p].deparment<<" "<<s1[p].phone_number<<" "<<s1[p].email<<" "<<s1[p].homeaddress<<" ";
			for(int x=0 ; x<4 ;x++){
				cout<<s1[p].salaries[x]+5000<<" ";
		}
	cout<<endl;
		
	}

	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<" after  the sorting---"<<endl;
	
	
	for(int  i = 0 ; i < 9 ; i++)
	{
		for(int l =0 ; l<8;++l)
		{
			if(s1[l].emp_age>s1[l+1].emp_age)
			{
					temp=s1[l];
					s1[l]=s1[l+1];
					s1[l+1]=temp;
			}
		}
	}
	
	

	cout<<"after sorting the array "<<endl;
	for(int  p = 0 ; p<9; p++){
		cout<<"	"<<s1[p].firstname<<" "<<s1[p].lastname<<" "<<s1[p].fathername<<" "<<s1[p].emp_number<<" ";
		cout<<s1[p].blood_group<<" "<<s1[p].emp_age<<" "<<s1[p].factory_name<<" ";
		cout<<s1[p].deparment<<" "<<s1[p].phone_number<<" "<<s1[p].email<<" "<<s1[p].homeaddress<<" ";
			for(int x=0 ; x<4 ;x++){
				cout<<s1[p].salaries[x]+5000<<" ";
		}
	cout<<endl;
		
	}
	
	ofstream out("output.txt");
		for(int p=0 ; p<9 ; p++){
			out<<s1[p].firstname<<" 	"<<s1[p].lastname<<"	 "<<s1[p].fathername<<" 	"<<s1[p].emp_number<<" 		";
			out<<s1[p].blood_group<<"	 "<<s1[p].emp_age<<"	 "<<s1[p].factory_name<<"	 ";
			out<<s1[p].deparment<<"	 "<<s1[p].phone_number<<"	 "<<s1[p].email<<"	 "<<s1[p].homeaddress<<"	 ";
			for(int x=0 ; x<4 ;x++){
				out<<s1[p].salaries[x]+5000<<"	 ";
			}
			out<<endl;
		
			}
			out<<endl;
	out.clear();
	}


		

	
