#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ofstream fout;
	string line;
	
	fout.open("file handling1.txt");
	while(fout){
		cout<<"Enter the line(in write mode) : ";
		getline(cin,line);
		
		fout<<line<<endl;
		if(line== "-1"){
			break;
		}
	}
	fout.close();
	
	ifstream fin;
	
	fin.open("file handling1.txt");
	
	while(fin){
		//cout<<"Enter the line(in read mode) : ";
		//getline(cin,line);

		cout<<line<<endl;
	}
	
}
