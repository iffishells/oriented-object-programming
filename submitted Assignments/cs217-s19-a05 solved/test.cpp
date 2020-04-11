#include <fstream>
#include<iostream>
using namespace std;
#define SIZE 4

template <class T>
class Queue {
private:
	T q[SIZE];
	int in;
	int out;
	T inc(T val);

public:
	Queue();
	void  enqueue(T val);
	T dequeue();
	void print();
	bool is_full;
	bool is_empty;
	

};
template<class T>
Queue ::Queue()
{
	in=out=0;

	is_full=false;

	is_empty=true;
		for(int i=0 ; i<4 ; i++)
		{
			q[i]=0;
		}
}
template<class T>
T Queue<T>::inc(T val){
	if(val + 1 == SIZE)
		val=0;
	else
		val+=1;

	return val;
}
template<class T>
void Queue<T> :: enqueue(T val){
	if(is_full)
		cout<<"file is full "<<endl;
	q[in]=val;

	in=inc(in);

	if(in==out){
		is_full=true;
	}else
	{
			is_empty=false;
	}



}
template<class T>
T Queue<T>::dequeue(){
	if(is_empty)
		cout<<"file is empty cannot be dequeue "<<endl;

	T ret=q[out];
	ret=inc(out);

	if(in==out)
		is_empty=false;

	is_full=true;
}

class Writer{

public:

	 void process_file(string filename, Queue<string> *q);
};


void Writer::process_file(string filename, Queue<string> *q){
	Queue<string> obj;

	ifstream in(filename);
	string line;
	if(in.is_open())
	{
		while(getline(in,line))
		{
			cout << line << endl;
			 //obj.enqueue(line);
		}
	}
	else
	{
		cout<<"file is not open now "<<endl;
	}
}
int main(){
	Queue<string> *que; 
  //  que = new Queue<string>; 

    string filename = "string-collection.txt"; 

    Writer first_writer; 
 //   Reader first_reader; 

    first_writer.process_file(filename, que); 
    //first_reader.process_queue(que); 

    return 0; 
}

