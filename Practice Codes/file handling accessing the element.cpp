#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	in.open("task.txt");
	string line;
	int size=0,element,count=0;
	if(in.is_open())
	{
		while(!in.eof())
		{
			getline(in,line);
			size++;
		}
	}
	else
	{
		cout<< " sorrry! The file is not open " <<endl;
	}
	in.close();
	in.open("task.txt");
	int size_of_array[size];
	int inc;
	if(in.is_open())
	{
		inc=0;
		while(!in.eof())
		{
			getline(in,line);
			for(int i=0 ; i < line.size() ; i++ )
			{
				if(line[i]==' ')
				count++;
			}
			size_of_array[inc]=++count;
			inc++;
			count=0;
		}
	}
	else
	{
		cout<<" sorry! The file is not open " <<endl;
	}
	
	
	for(int i=0 ;i<size ; i++)
	{
		cout<< " Number of Element in "<< i << " line = "<<size_of_array[i]<<endl;
	}
	in.close();
	
	ofstream out;
	in.open("task.txt");
	out.open("outputfile.txt");
	int *pline[size];
	for(int i=0 ; i <size ; i++)
	{
		pline[i]=new int[size_of_array[i]];
	}
	
	int sum=0;
	for(int i= 0 ; i < size ; i++)
	{
		for(int j=0 ; j < size_of_array[i] ;j++)
		{
			in>>pline[i][j];
			sum=sum+pline[i][j];
			
			
			cout<<pline[i][j]<<" ";
		}
		cout<<endl;
		cout<< " Average of the line = "<<sum/2<<endl;
		string word;
		word="Average is = ";
		out<<word;
		out<<sum/2<<endl;
		sum=0;
	}
	
	
	
}
