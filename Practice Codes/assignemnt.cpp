#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct GradeRec{
	float percent;
	char grade;
}; 

struct studentRecord{
	string fname;
	string lname;
	int age;
	double marks[5];
	GradeRec courseGrade[5]; 
};
int  persentage(double marks){
		int x = (marks*100)/100;
		return x;
	
		

}
char calculateGrade(double marks){
	if(marks>91)
	{
		return 'A';	
	}
	else if(marks>81)
	{
		return '-A';
	}
	else if(marks>70)
	{
		return '+B';
	}else if(marks>60){
		return '-B';
		
	}else if(marks>50){
		return 'C';
		
	}
	else {
		return 'F';
	}
}
void input( studentRecord final[]){
	
	for(int i=0 ; i<5 ; i++)
	{
		cout<<"Enter the 1st Name  : ";
		cin>>final[i].fname;
		cout<<"Enter the last Name : ";
		cin>>final[i].lname;
		cout<<"Enter the age of student : ";
		cin>>final[i].age;
		for(int j=0  ; j<5 ; j++)
		{
			cout<<"Enter the marks of the student : ";
				cin>>final[i].marks[j];
		}
		for(int z =0 ;z< 5 ; z++){
			final[i].courseGrade[z].grade= calculateGrade(final[i].marks[z]);

		}
		for(int x=0 ; x<5 ; x++){
			final[i].courseGrade[x].percent= persentage(final[i].marks[x]);
		}
		
		
	}
	
	
}
void output(studentRecord final[]){
		int sum=0;
	for(int i=0 ; i<5 ; i++)
	{
			cout<<final[i].fname<<"		"<<final[i].lname<<"	"<<"age : "<<final[i].age<<endl;
		for(int j=0  ; j<5 ; j++)
		{
			
				cout<<final[i].marks[j]<<"		";
		}
		cout<<endl;
		for(int z =0 ;z<5 ; z++){
			cout<<final[i].courseGrade[z].grade<<"		";
		}
		cout<<endl;
		for(int x=0 ; x<5 ; x++){
			cout<<final[i].courseGrade[x].percent<<"%"<<"		";
			sum=sum+final[i].courseGrade[x].percent;
		}
		
		cout<<endl;
			
			
	}
	cout<<"sum : "<<sum<<endl;
	cout<<"total persentage : "<<sum/100<<"%"<<endl;
	
}
int main(){
	//Assalmiolikum 
	// sir you mention in the task that you will take the char data type for grade but sir  i think we dont add the character more then one like(-B)
	//that why my code deos not represnet the garde wiht -b +b etc..
	

	studentRecord s1,s2,s3,s4,s5;
	studentRecord final[5];
	input(final);

	output(final);	
	
}
