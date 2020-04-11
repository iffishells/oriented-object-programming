#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <typeinfo>

using namespace std;

void user_input_time(){
	//char x='Y';
	
	int hour,minute;
		int test=1;
		string test2="a";
		entervalidinput:
			cout<<"Enter Time for Alarm (format 24 hrs: 22:56)"<<endl;
			cout<<"Alarm Hour: ";
			cin>>hour;
			cout<<"Alarm Minute: ";
			cin>>minute;
			
		if(typeid(hour).name()==typeid(test).name() && typeid(minute).name()==typeid(test).name())
		{
			ofstream fout;
			fout.open("user_time_input_to_file_to_compare.txt");
			fout<<hour<<endl;
			fout<<minute<<endl;
			fout.close();
					
	
		}
		else if(typeid(hour).name()==typeid(test2).name() || typeid(minute).name()==typeid(test2).name())
			{ 
			goto entervalidinput;
				
			}
//		cout<<"do you want to reset time? (Y/N)"<<endl;
//		cin>>x;
//	}
}

int* read_time_from_file(){
	
	int hour,minute;
	static int timing[2];
	ifstream fin;
	fin.open("user_time_input_to_file_to_compare.txt");
	fin>>hour;
	fin>>minute;
	cout<<"Time Read from file:" <<hour<<":"<<minute<<endl;
	fin.close();
	timing[0]=hour;
	timing[1]=minute;
	
	return timing;
}


void get_beep_data(){
	char x='Y';
	while(x=='Y'){
	
		int f, t;
		cout<<"Set Alarm Frequency (2000-9000): "<<endl;
		cin>>f;
		cout<<"Set Beep Timing (in seconds): "<<endl;
		cin>>t;
		t=t*1000;
		
		ofstream fout;
		fout.open("Beep timings.txt");	
		fout<<f<<endl;
		fout<<t<<endl;
		fout.close();
		cout<<"Do you want to reset beep data? (Y/N)"<<endl;
		cin>>x;
	}
}

int * set_beep_data(){
	
	ifstream fin;
	static int line[2];
	int freq,time;
	fin.open("Beep timings.txt");
	while(fin)
	{   
		fin>>freq;
		fin>>time;
	}


	line[0]=freq;
	line[1]=time;
	//cout<<line[0]<<endl;
	//cout<<line[1]<<endl;
	fin.close();
	return line;
}

void user_input_date(){
	char x='Y';
	while(x=='Y'){
	
		cout<<"Enter Date for Alarm (format: 9/12/2019)"<<endl;
		int day,month,year;
		cout<<"Set Alarm Day: ";
		cin>>day;
		cout<<"Set Alarm Month: ";
		cin>>month;
		cout<<"Set Alarm Year: ";
		cin>>year;
		
		ofstream fout;
		fout.open("user_date_input_to_file_to_compare.txt");
		fout<<day<<endl;
		fout<<month<<endl;
		fout<<year<<endl;
		fout.close();
		cout<<"Do you want to reset date? (Y/N)"<<endl;
		cin>>x;
	}
}

bool read_date_from_file(){
	
	int day,month,year;
	ifstream fin;
	fin.open("user_date_input_to_file_to_compare.txt");
	fin>>day;
	fin>>month;
	fin>>year;
	cout<<"Data Read from file:" <<day<<"/"<<month<<"/"<<year<<endl;
	fin.close();
	
		time_t t = time(NULL);
  tm* timePtr = localtime(&t);
  
  if ( (timePtr->tm_mday)==day  &&  (timePtr->tm_mon)+1==month  &&  (timePtr->tm_year)+1900==year ) 
  {
  	cout << "alarm date and current date matched! \n"<<endl;
  	return true;
  }
  else {
  	cout<<"alarm date and current date not matched! \n"<<endl;
  	return false;
  }
  
}

void alarmclock(){  //check user_time_input_to_file_to_comppare.cpp
    
	time_t curr_time;
	curr_time = time(NULL);

	tm *tm_local = localtime(&curr_time);
//	cout << "Current local time : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec;
	
	int a = 0;
    int h=tm_local->tm_hour;
    int m=tm_local->tm_min;
    int s=tm_local->tm_sec;
    
    int hour,minute;
    int * timing;
    timing = read_time_from_file();
    
	hour=*timing;
	timing ++;
	minute=*timing;
//	cout<<"Read Hour: "<<hour<<endl;
//	cout<<"Read Minute: "<<minute<<endl;
    	
    
    while (a == 0)
    {
		  cout << h << ":" << m << ":" << s <<endl;
          Sleep(1000);
          s++;
          if (s > 59)
          {
                s = 0;
                m++;
                
                if (m > 59)
                {
                      m = 0;
                      h++;
                      
                      if (h > 12)
                      {
                            h = 00;
                      }
                }
          }
          if ( hour==h && minute==m && read_date_from_file() )  
          {
			int * num;
			num = set_beep_data();
			int data[2];
			for (int i=0; i<2; i++)
			{
				data[i]=num[i];
			}
		//	cout<<"data 0:"<< data[0]<<endl;
		//	cout<<"data 1: "<<data[1]<<endl;
			Beep(data[0], data[1]);
          	return;
		  }
    } 
}


int main(){
	user_input_time();
	user_input_date();
	get_beep_data();
	read_date_from_file();
	alarmclock();
	
	
	return 0;
}
