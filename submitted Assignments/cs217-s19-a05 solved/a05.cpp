#include <fstream>
#include<iostream>
using namespace std;
#define SIZE 5

void pause();

template <class T>

class Queue {
private:
    T q[SIZE];
    int in;
    int out;
    int  inc(int val);

public:
    Queue();
    void  enqueue(T val);
    T dequeue ();
    void print ();
    bool is_full ;
    bool is_empty ;
};
template<class T>
Queue<T> :: Queue()
{   for(int i=0  ; i < SIZE ; i++)
    {
        q[i]="NULL";
    }
    in = out = 0; 
    is_empty = true; 
    is_full = false; 


}
template<class T>
 int  Queue<T>::inc(int val){
    if( val+1 == SIZE )
    {
        val=0;
    }
    else
    {
        val += 1; 
    }
    return val;
}
template<class T>
void Queue<T> :: enqueue(T val){
    if(is_full)
        cout<< "Queue full .cannot enqueue "<<endl;
    T val2 = val;
    q[ in ] = val2;
    
    in = inc(in);
    if( in == out ){
        is_full = true; 
    }
    else
    {
        is_empty = false;
    }
}
template<class T>
T Queue<T> :: dequeue (){
     if (is_empty) 
        cout<< "Queue empty. Cannot dequeue ... " <<endl; 
    

    // get from where out is and inc out 
    T ret = q[out]; 
    out = inc(out); 

    // see if we are now empty 
    if (in == out) 
        is_empty = true; 

    // definitely not full any more 
    is_full = false;       

    return ret; 
}


template <class T>
void Queue<T>::print() { 

     cout << "[\t"; 
    for (int i = 0; i < SIZE; i++)
        cout << q[i] << "\t"; 
    cout << "]" << endl; 

    cout << " \t"; 
    for (int i = 0; i < SIZE; i++) 
        cout << i << "\t"; 
    cout << " " << endl; 

    cout << " "; 
    for (int i = 0; i <= in; i++) 
        cout << "\t"; 
    cout << "^in" << endl;

    cout << " "; 
    for (int i = 0; i <= out; i++) 
        cout << "\t"; 
    cout << "^out" << endl;
}

class Writer{

public:

     void process_file(string filename, Queue<string> *q);
};


void Writer::process_file(string filename, Queue<string> *q){
    ifstream in(filename);
    string line;
        if(in.is_open())
        {
            while(getline(in,line))
        {
            q->enqueue(line);
                q->print();
        }
        }
        else
        {
        cout<<"file is not open now "<<endl;
        }

}
class Reader{
public:
    void process_queue(Queue<string> *q);


};
void Reader :: process_queue(Queue<string> *q){
    string v;
    for(int i=0 ; i<SIZE ; i++){
         v=q -> dequeue ();
        cout<<v<< " has lenght  : " << v.size()  << endl;
        //q->print();

    }

    

}
int main(){
    Queue<string > *que; 
    que = new Queue<string>; 

    string filename = "string-collection.txt"; 

    Writer first_writer; 
    Reader first_reader; 

    first_writer.process_file(filename, que); 
    first_reader.process_queue(que);
 


    return 0; 

    
}

