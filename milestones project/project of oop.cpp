#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include <conio.h>

using namespace std;

#define SIZE 5

class Clock{
	
	public:
		Clock();
	   ~Clock();
		
};
Clock::Clock(){
}
Clock::~Clock(){
}

class Alarmclock: public Clock{
	private:
		
		struct date_info{
			int day;
			int month;
			int year;
		};
		
		struct time_info{
			int hour;
			int minute;
		};
		
	public:
		
		Alarmclock();
	   ~Alarmclock();
			
		date_info alarmdate[SIZE];
		time_info alarmtime[SIZE];
		
		void get_alarm_info();
		void show_alarm_info();
		void show_all_alarms_info();
		void show_specific_alarm_info(int alarmno);
		
		int * get_date( int alarmno );
		int * get_time( int alarmno );
				
		void get_beep_data();
		int * set_beep_data();
		void beeper( Alarmclock * get_info_to_make_beep); 
		int * set_alarm( Alarmclock * ptr_get_info_of_on_alarm ); 
		
	
};
class Timer:public Clock{
	
	int timer_hour,timer_min,timer_sec,user_hour,user_min,user_sec;
	char ch;
	
	public:
		Timer();
	   ~Timer();
	    void timer();
	    void show_timer();
				
};
class Stopwatch:public Clock{
	
	int h,m,s,ms;
	char ch;
	
	public:
		Stopwatch();
	   ~Stopwatch();
	    void stopwatch();
	    void show_stopwatch();
				
};

Alarmclock::Alarmclock(){
	
	for(int i=0; i<SIZE; i++){
		alarmdate[i].day=0;
		alarmdate[i].month=0;
		alarmdate[i].year=2019;				//automatically assigning year 2019
	}
	
	for(int i=0; i<SIZE; i++){
		alarmtime[i].hour=00;
		alarmtime[i].minute=00;
	}		
}
 
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////


void Alarmclock::get_alarm_info(){
	
	char x='Y';
	int i=0;
	int y=1;
	int AM_PM;
	cout<<" \n\t\t\t\t Input Alarms informations: "<<endl;
	while (x=='Y'){
		
		//cout<<"\nEnter Alarm "<<y<<" Day: "; 
		cout<<"\n\t\t\t\t Enter Alaram "<<y<< " Day :";	
		cin>>alarmdate[i].day;
		
		while(alarmdate[i].day<1 || alarmdate[i].day>31 ){                    //boundary validations
			cout<<"\n\t\t\t\t Invalid input! Please re-enter Alarm "<<y<<" day: ";
			cin>>alarmdate[i].day;
		} 
		
    	cout<<"\n\t\t\t\t Enter Alarm "<<y<<" Month: "; 
		cin>>alarmdate[i].month;
		
		while(alarmdate[i].month<1 || alarmdate[i].month>12 ){					//boundary validations
			cout<<"\n\t\t\t\t Invalid input! Please re-enter Alarm "<<y<<" month: ";
			cin>>alarmdate[i].month;
		} 
		
		//for wrong inputs like there are 28 days in feb and 30 days in sep etc
		if ( alarmdate[i].month==2 && alarmdate[i].day>28 || alarmdate[i].month==4 && alarmdate[i].day>30 || alarmdate[i].month==6 && alarmdate[i].day>30 || alarmdate[i].month==9 && alarmdate[i].day>30 || alarmdate[i].month==11 && alarmdate[i].day>30 )
		{ 
			cout<<"\n\t\t\t\t Invalid date entered! "<<endl;
			cout<<"\n\t\t\t\t Please re-enter alarm "<<y<<" day: ";
			cin>>alarmdate[i].day;
			cout<<"\n\t\t\t\t Please re-enter alarm "<<y<<" month: ";
			cin>>alarmdate[i].month;	
		}
		
		cout<<"\n\t\t\t\t Alarm "<<y<<" timing: "<<endl;
		cout<<"\n\t\t\t\t To set alarm for AM press 1: \n\t\t\t\t\t\t\t To set alarm for PM press 2: \n: ";
		cin>>AM_PM;
		if(AM_PM==1){
			cout<<"\n\t\t\t\t AM selected!"<<endl;
		}else if(AM_PM==2){
			cout<<"\n\t\t\t\t PM selected!"<<endl;
		}
		
		cout<<"\n\t\t\t\t Enter Alarm "<<y<<" hour: "; 	
		cin>>alarmtime[i].hour;
		
		while(alarmtime[i].hour<0 || alarmtime[i].hour>24 ){
			cout<<"\n\t\t\t\t Invalid input! Please re-enter Alarm "<<y<<" hour: ";
			cin>>alarmtime[i].hour;
		} 
		if ( AM_PM ==1 ){
			if(alarmtime[i].hour==12){
				alarmtime[i].hour=0;
			}
		}
			
		if( AM_PM ==2 ){

			if(alarmtime[i].hour==1){
				alarmtime[i].hour=13;
			}else if(alarmtime[i].hour==2){
				alarmtime[i].hour=14;
			}else if(alarmtime[i].hour==3){
				alarmtime[i].hour=15;
			}else if(alarmtime[i].hour==4){
				alarmtime[i].hour=16;
			}else if(alarmtime[i].hour==5){
				alarmtime[i].hour=17;
			}else if(alarmtime[i].hour==6){
				alarmtime[i].hour=18;
			}else if(alarmtime[i].hour==7){
				alarmtime[i].hour=19;
			}else if(alarmtime[i].hour==8){
				alarmtime[i].hour=20;
			}else if(alarmtime[i].hour==9){
				alarmtime[i].hour=21;
			}else if(alarmtime[i].hour==10){
				alarmtime[i].hour=22;
			}else if(alarmtime[i].hour==11){
				alarmtime[i].hour=23;
			}else if(alarmtime[i].hour==12){
				alarmtime[i].hour=24;
			}
		}
				
    	cout<<"\n\t\t\t\t Enter Alarm "<<y<<" minute: "; 
		cin>>alarmtime[i].minute;
		
		while(alarmtime[i].minute<0 || alarmtime[i].minute>60 ){
			cout<<"\n\t\t\t\t  Invalid input! Please re-enter Alarm "<<y<<" minute: ";
			cin>>alarmtime[i].minute;
		} 
		 
		cout<<"\n\t\t\t\t Do you want to set more alarms? (Y/N): ";
		cin>>x; 
		cout<<endl;
		i++;
		y++;
	}	
	
}


///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void Alarmclock::show_alarm_info(){
	
	int showinfo, alarmno;
	
	cout<< "\n\t\t\t\t To see all Alarms details press 1: \n\t\t\t\t\t\t\t To see specific Alarm details press 2:" ;
	cin>>showinfo;
	
	if (showinfo==1)
	{
		Alarmclock::show_all_alarms_info();				//envoking show_all_alarms_dates()
	}
	else if(showinfo==2)
	{
		cout<<"\n\t\t\t\t Which Alarm details you want to see? : ";
		cin>>alarmno;	
		
		Alarmclock::show_specific_alarm_info(alarmno);
	}
}

void Alarmclock::show_all_alarms_info(){
	

	int x=1;
	cout<<endl;
	for (int i=0; i<SIZE; i++)
	{
		if ( alarmdate[i].day==0 && alarmdate[i].month==0 && alarmtime[i].hour==0 && alarmtime[i].minute==0 )
		{
			cout<<"\n\t\t\t\t Alarm "<<x<<" details have not been set."<<endl;	
		}
		else
		{
			cout<<" \n\t\t\t\t Alarm "<<x<<" date: "<<alarmdate[i].day<<"/"<<alarmdate[i].month<<"/"<<alarmdate[i].year<<"\t\tTime: "<<alarmtime[i].hour<<":"<<alarmtime[i].minute<<endl;	
		} 
		x++;
	} 	
}

void Alarmclock::show_specific_alarm_info( int alarmno )
	{
	
	 	int x= alarmno-1;
	
		if ( alarmdate[x].day==0 && alarmdate[x].month==0 && alarmtime[x].hour==0 && alarmtime[x].minute==0 ){					//if date is not set print a msg
			cout<<"\n\t\t\t\t Alarm "<<alarmno<<" details have not been set."<<endl;
		}
		else{																	//else show that date
			cout<<"\n\t\t\t\t Alarm "<<alarmno<<" date: "<<alarmdate[x].day<<"/"<<alarmdate[x].month<<"/"<<alarmdate[x].year<<"\t\tAlarm time: "<<alarmtime[x].hour<<":"<<alarmtime[x].minute<<endl;
		}	
}


////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

int * Alarmclock::get_date( int alarmno ){
	
	static int return_date[3];
	int x = alarmno-1;
		
	return_date[0]=Alarmclock::alarmdate[x].day;	
	return_date[1]=Alarmclock::alarmdate[x].month;
	return_date[2]=Alarmclock::alarmdate[x].year;
	
	return return_date;           //returns day month and then year

}


/////////////////////////////////////////////
////////////////////////////////////////////


int * Alarmclock::get_time( int alarmno ){
	
	static int on_alarm_timings[2];
	int x= alarmno-1;
	if (alarmno){
		on_alarm_timings[0] = alarmtime[x].hour;
		on_alarm_timings[1] = alarmtime[x].minute;
		return on_alarm_timings;   // returns first hour then minutes
	}
	
}


///////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


void Alarmclock::get_beep_data(){
	char end_cond='Y';
	while(end_cond=='Y'){
	
		int fre, timing;
		cout<<"\n\t\t\t\t Set Alarm Frequency (2000-9000): "<<endl;
		cin>>fre;
		cout<<"\n\t\t\t\t Set Beep Timing (in seconds): "<<endl;
		cin>>timing;
		timing=timing*1000;
		
		ofstream fout;
		fout.open("Beep timings.txt");	
		fout<<fre<<endl;
		fout<<timing<<endl;
		fout.close();
		cout<<"\n\t\t\t\t Do you want to reset beep data? (Y/N)"<<endl;
		cin>>end_cond;
	}
}

int * Alarmclock::set_beep_data(){  
	
	ifstream fin;
	static int line[2];   //to return beep data read from file
	fin.open("Beep timings.txt");
		while(fin)
		{   
			fin>>line[0];   //freq read from file
			fin>>line[1];	//time read from file
		}
	fin.close();
	
	return line;
}


void Alarmclock::beeper( Alarmclock * get_info_to_make_beep ){  //check user_time_input_to_file_to_comppare.cpp
    
	time_t curr_time;					//for time
	curr_time = time(NULL);
	
	time_t t = time(NULL);				//for date
	tm* timePtr = localtime(&t);

	tm *tm_local = localtime(&curr_time);

	
	int a = 0;
	
    int hour=tm_local->tm_hour;
    int min=tm_local->tm_min;
    int sec=tm_local->tm_sec;
	
	int alarm_info_to_run_beep[5];      //saves  hour and minutes
		
    int * ON_alarm_info;
    
    ON_alarm_info = Alarmclock::set_alarm( get_info_to_make_beep ); 
    for (int i=0; i<5; i++)
			{
				alarm_info_to_run_beep[i]=ON_alarm_info[i];
			}
    
	ON_alarm_info = Alarmclock::set_alarm( get_info_to_make_beep );   //gets ON alarm hour and min by invoking function
	
	alarm_info_to_run_beep[0]= * ON_alarm_info;   //ON alarm day
	
	ON_alarm_info++;
	
	alarm_info_to_run_beep[1]= * ON_alarm_info;  //ON alarm month
	
	ON_alarm_info++;
	
	alarm_info_to_run_beep[2]= * ON_alarm_info;   //ON alarm year
	
	ON_alarm_info++;
	
	alarm_info_to_run_beep[3]= * ON_alarm_info;		//ON alarm hour
	
	ON_alarm_info++;
	
	alarm_info_to_run_beep[4]= * ON_alarm_info;		//ON alarm minute
	cout << hour << ":" << min <<endl;
    while (a == 0){
    	
    	Sleep(1000);
    	sec++;
    	
    	if (sec > 59)
		{	
			
		    sec = 0;
		    min++;
		    
		    if (min > 59)
		    {   
		        cout<< hour << ":" << min <<endl;
		        min = 00;
		        hour++;
		      
		        if (hour > 12){
		        	hour = 00;
		        } 
		    }
		}
			//day 														//month													//year												//hour								//minute
		if (  (timePtr->tm_mday) == alarm_info_to_run_beep[0]    &&   (timePtr->tm_mon)+1 == alarm_info_to_run_beep[1] && (timePtr->tm_year)+1900 == alarm_info_to_run_beep[2]  && hour==alarm_info_to_run_beep[3] && min==alarm_info_to_run_beep[4] )   //comparing ON alarm timings with local timings
		{
			int * num = Alarmclock::set_beep_data();
			int data[2];
			for (int i=0; i<2; i++)
			{
				data[i]=num[i];
			}
			Beep(data[0], data[1]);
			return;
		}
    } 
}
 
 
 //////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////
 
int * Alarmclock::set_alarm( Alarmclock * ptr_get_info_of_on_alarm ){
	
	int j;
	cout<<"\n\t\t\t\t Which alarm you want to On? : ";
	cin>>j;
	
	if (j>SIZE || j<1){
		cout<<"\n\t\t\t\t There are only "<<SIZE<<" alarms available. \nPlease re-enter valid alarm number to ON it.. : ";
		cin>>j;
	}
	
	static int on_alarm_info[5];				//will return ON alarm info as: day,month,year,hour,minute
	
	int * ptr_get_on_alarm_date = ptr_get_info_of_on_alarm->get_date(j);
	on_alarm_info[0] = * ptr_get_on_alarm_date;			                 	//envoking get date () and sving day
	ptr_get_on_alarm_date++ ;												//incrementing ptr
	on_alarm_info[1] = * ptr_get_on_alarm_date;								//saving month 
	ptr_get_on_alarm_date++ ;												//incrementing ptr
	on_alarm_info[2] = * ptr_get_on_alarm_date;								//saving year

	
	int * ptr_get_on_alarm_time = ptr_get_info_of_on_alarm->get_time(j);		//got ON alarm hours
	on_alarm_info[3] = * ptr_get_on_alarm_time;   					        	//saved ON alarm hour
	ptr_get_on_alarm_time++;
	on_alarm_info[4] = * ptr_get_on_alarm_time;						        	//saved ON alarm minutes
	
	return on_alarm_info;
	
}

/////////////////////////////////////////
///////////////////////////////////////////



Stopwatch::Stopwatch(){
	h=0,m=0,s=0,ms=0;
	ch='p';
}
Stopwatch::~Stopwatch(){
}

void Stopwatch::show_stopwatch(){
	
	//clrscr(); 
	system("CLS");
	
	cout<<"\t\t\t\t#############"<<endl;
	cout<<"\t\t\t\t Stopwatch #"<<endl;
	cout<<"\t\t\t\t#############"<<endl;
	cout<<"\n\n\\\n\t\t\t\t "<<h<<":"<<m<<":"<<s<<endl;
	
	cout<<"\n\t\t\t\tPress Key:\n"<<endl;
	cout<<"\n\t\t\t\t s -> Start"<<endl;
	cout<<"\n\t\t\t\t p -> Pause"<<endl;
	cout<<"\n\t\t\t\t r -> Reset"<<endl;
	cout<<"\n\t\t\t\t e -> Exit"<<endl;

}

void Stopwatch::stopwatch(){
	Stopwatch::show_stopwatch();
	
	while(1){
		
		if( kbhit() )
			ch=getch();
		if(ch=='s'||ch=='S')
			break;
		if(ch=='e'||ch=='E')
			exit(0);
	}
	
	while(1){
		
		Stopwatch::show_stopwatch();
		//		delay(10);
		Sleep(1000);
		
		if(kbhit())
			ch=getch();
		
		if(ch=='r'||ch=='R'){
			
			h=m=s=ms=0;
			Stopwatch::show_stopwatch();
		
			while(1){
				
				if(kbhit())
					ch=getch();
				if(ch=='s'||ch=='S')
					break;
				if(ch=='e'||ch=='E')
					exit(0);
			}
		}
		else if(ch=='p'||ch=='P'){
	
			while(1){
				
				if(kbhit())
					ch=getch();
				if(ch=='s'||ch=='S')
					break;
				if(ch=='e'||ch=='E')
					exit(0);
				if(ch=='r'||ch=='R'){
					
					ch='c';
					h=m=s=ms=0;
					Stopwatch::show_stopwatch();
				}
			}
		}
		else if(ch=='e'||ch=='E')
			exit(0);
		
		if(ms!=99)
			ms++;
		else{
			ms=0;
			if(s!=59)
			s++;
			else{
				s=0;
				if(m!=59)
				m++;
				else{
					m=0;
					h++;
				}
			}
		}
	}
}


//////////////////////////////////////////
//////////////////////////////////////////
/////////////////////////////////////////


int main(){
	
	int choice;
	cout<<"\n\t\t\t\t Enter your choice: \n\t\t\t\t 1->Alarm Clock \n\t\t\t\t 2->Stop watch"<<endl;
	cin>>choice;
	
	if (choice==1){
		
		Alarmclock * a1 = new Alarmclock;
		
		a1 -> get_alarm_info();
		a1 -> show_alarm_info();
		a1 -> get_beep_data();
		a1 -> set_beep_data();
		a1 -> beeper (a1);
	}else if(choice==2){
		Stopwatch * sw1 = new Stopwatch;
		sw1 -> stopwatch();
	}
	
	return 0;
}



