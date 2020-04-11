#include<iostream>
#define SIZE 5
#include<fstream>
#include<ctime>
using namespace std;

class Alaram_clock
{
	private:
		struct date_info{
			int day;
			int month;
			int year;
		};
		
	public:
		
		Alaram_clock();
		~Alaram_clock();
	
		void set_alarm_date();
		void show_date();
		void show_all_alarms_dates();
		void show_specific_alarm_date( int alarmno );
		bool check_date( int alarmno );
		date_info alarmdate[SIZE];
	
	private:
	struct time_info{
		int hour;
		int minute;
	};
	
	public:
		
		void set_alarm_time();
		void show_time();
		void show_specific_alarm_time( int alarmno );
		void show_all_alarms_times();
		time_info alarmtime[SIZE];
		int * check_time( int alarmno );
	public:
		void get_beep_data();
		int * set_beep_data();
		void beeper( Alaram_clock * dateobj, Alaram_clock * timeobj );
		int * set_alarm( Alaram_clock * dateobj, Alaram_clock * timeobj );

		
};
Alaram_clock::Alaram_clock(){
	for(int i=0; i<SIZE; i++){
		alarmdate[i].day=0;
		alarmdate[i].month=0;
		alarmdate[i].year=2019;				//automatically assigning year 2019
	}
}
Alaram_clock::~Alaram_clock(){
}

void Alaram_clock::set_alarm_date(){
		
	char x='Y';
	int i=0;
	int y=1;
	cout<<"Input day/month for 5 alarms. (9/12): "<<endl;
	while (x=='Y' || x=='y'){
		
		cout<<"Enter Alarm "<<y<<" Day: "; 	
		cin>>alarmdate[i].day;
		
		if(alarmdate[i].day<1 || alarmdate[i].day>31 ){                    //boundary validations
			cout<<"Invalid input! Please re-enter alarm "<<y<<" day: ";
			cin>>alarmdate[i].day;
		} 
		
    	cout<<"Enter Alarm "<<y<<" Month: "; 
		cin>>alarmdate[i].month;
		
		if(alarmdate[i].month<1 || alarmdate[i].month>12 ){					//boundary validations
			cout<<"Invalid input! Please re-enter alarm "<<y<<" month: ";
			cin>>alarmdate[i].month;
		} 
		
		//for wrong inputs like there are 28 days in feb and 30 days in sep etc
		if ( alarmdate[i].month==2 && alarmdate[i].day>28 || alarmdate[i].month==4 && alarmdate[i].day>30 || alarmdate[i].month==6 && alarmdate[i].day>30 || alarmdate[i].month==9 && alarmdate[i].day>30 || alarmdate[i].month==11 && alarmdate[i].day>30 )
		{ 
			cout<<"\nInvalid date entered! "<<endl;
			cout<<"\nPlease re-enter alarm "<<y<<" day: ";
			cin>>alarmdate[i].day;
			cout<<"Please re-enter alarm "<<y<<" month: ";
			cin>>alarmdate[i].month;	
		}
		 
		cout<<"\nDo you want to set date for more alarms? (Y/N): ";
		cin>>x; 
		cout<<endl;
		i++;
		y++;
	}
}

void Alaram_clock::show_date(){
	int show;
	int alarmno;
	cout<<"\nTo see all alarms dates press 1: \nTo see specific alarm date press 2: \n: ";
	cin>>show;
	if (show==1){
		Alaram_clock::show_all_alarms_dates();				//envoking show_all_alarms_dates()
	}else if(show==2){
		cout<<"\nFor which alarm you want to see date? : ";
		cin>>alarmno;	
		Alaram_clock::show_specific_alarm_date(alarmno);			//envoking show_specific_alarm_date(alarmno)
	}	
	
}

void Alaram_clock::show_specific_alarm_date( int alarmno ){
	
	int x= alarmno-1;
	if(alarmno){
		if ( alarmdate[x].day==0 && alarmdate[x].month==0 ){					//if date is not set print a msg
			cout<<"Alarm "<<alarmno<<" date has not been set."<<endl;
		}
		else{																	//else show that date
			cout<<"Alarm "<<alarmno<<" date: "<<alarmdate[x].day<<"/"<<alarmdate[x].month<<"/"<<alarmdate[x].year<<endl;
		}
	}
}

void Alaram_clock::show_all_alarms_dates(){

	int x=1;
	cout<<endl;
	for (int i=0; i<SIZE; i++){
		if ( alarmdate[i].day==0 && alarmdate[i].month==0 )	{
			cout<<"Alarm "<<x<<" date has not been set."<<endl;	
		}else{
			cout<<"Alarm "<<x<<" date: "<<alarmdate[i].day<<"/"<<alarmdate[i].month<<"/"<<alarmdate[i].year<<endl;	
		} 
		x++;
	}
}



bool Alaram_clock::check_date( int alarmno ){
	
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	
	int day,month;
	char on_another_alarm;
	
	int x = alarmno-1;
		
	day=Alaram_clock::alarmdate[x].day;	
	month=Alaram_clock::alarmdate[x].month;

	if ( (timePtr->tm_mday) == day   &&   (timePtr->tm_mon)+1 == month ) //   &&   (timePtr->tm_year)+1900 == alarmdate[0].year) 
	{
		cout << "Alarm date and current date matched! proceeding to alarm.. \n"<<endl;
		return true;
	}else { 
  		cout<<"Alarm date and current date not matched! \n"<<endl;
//  		cout<<"Do you want to on another alarm? (Y/N): ";
//  		cin>>on_another_alarm;
//  		if (on_another_alarm=='Y'){
//			return on_another_alarm; 			
//		}
		return false;
	}
}
void Alaram_clock::set_alarm_time(){
	
	char x='Y';
	int i=0;
	int y=1;
	int AM_PM;
	
	cout<<"\nInput time for "<<SIZE<<" alarms. (hour:minute): "<<endl;
	
	while (x=='Y'){
		
		cout<<"\nTo set alarm for AM press 1: \nTo set alarm for PM press 2: \n: ";
		cin>>AM_PM;
		
		cout<<"Enter Alarm "<<y<<" hour: "; 	
		cin>>alarmtime[i].hour;
		
		if(alarmtime[i].hour<0 || alarmtime[i].hour>24 ){
			cout<<"Invalid input! Please re-enter.."<<endl;
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
				
    	cout<<"Enter Alarm "<<y<<" minute: "; 
		cin>>alarmtime[i].minute;
		
		if(alarmtime[i].minute<0 || alarmtime[i].minute>60 ){
			cout<<"Invalid input! Please re-enter.."<<endl;
			cin>>alarmtime[i].minute;
		} 
		// here is wrong condition when user put the wing number then no hadle thats!		
			 
		cout<<"\nDo you want to set time for more alarms? (Y/N): \n: ";
		cin>>x;
		i++;
		y++;
	}
}

void Alaram_clock::show_time(){
	int show;
	int alarmno;
	cout<<"\nTo see all alarms times press 1: \nTo see specific alarm time press 2: \n: ";
	cin>>show;
	if (show==1){
		Alaram_clock::show_all_alarms_times();
	}else if(show==2){
		cout<<"\nFor which alarm you want to see time? : ";
		cin>>alarmno;	
		Alaram_clock::show_specific_alarm_time(alarmno);	
	}	
}

void Alaram_clock::show_specific_alarm_time( int alarmno ){
	
	int x = alarmno-1;
	
	if( alarmno){
		if ( alarmtime[x].hour==0 && alarmtime[x].minute==0 ){
			cout<<"Alarm "<<alarmno<<" time has not been set."<<endl;
		}
		else{
			cout<<"Alarm "<<alarmno<<" time: "<<alarmtime[x].hour<<":"<<alarmtime[x].minute<<endl;
		}
	}
}

void Alaram_clock::show_all_alarms_times(){
	int x=1;
	cout<<endl;
	for (int i=0; i<SIZE; i++){
		if ( alarmtime[i].hour==0 && alarmtime[i].minute==0 )	{
			cout<<"Alarm "<<x<<" time has not been set."<<endl;	
		}else{
			cout<<"Alarm "<<x<<" time: "<<alarmtime[i].hour<<":"<<alarmtime[i].minute<<endl;	
		} 
		x++;
	}	
}

int * Alaram_clock::check_time( int alarmno ){
	
	static int on_alarm_timings[2];
	int x= alarmno-1;
	if (alarmno){
		on_alarm_timings[0] = alarmtime[x].hour;
		on_alarm_timings[1] = alarmtime[x].minute;
		return on_alarm_timings;
	}
	
}
void Alaram_clock::get_beep_data(){
	char x='Y';
	while(x=='Y'){
	
		int f, t;
		cout<<"\nSet Alarm Frequency (2000-9000): "<<endl;
		cin>>f;
		cout<<"\nSet Beep Timing (in seconds): "<<endl;
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

int * Alaram_clock::set_beep_data(){  
	
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



void Alaram_clock::beeper( Alaram_clock * dateobj, Alaram_clock * timeobj ){  //check user_time_input_to_file_to_comppare.cpp
    
	time_t curr_time;
	curr_time = time(NULL);

	tm *tm_local = localtime(&curr_time);

	
	int a = 0;
	
    int hour=tm_local->tm_hour;
    int min=tm_local->tm_min;
    int sec=tm_local->tm_sec;
	
	int alarm_info_to_run_beep[2];      //saves  hour and minutes
		
    int * ON_alarm_info;
    
	ON_alarm_info = Alaram_clock::set_alarm(dateobj, timeobj);   //gets ON alarm hour and min by invoking function
	
	alarm_info_to_run_beep[0]= * ON_alarm_info;   //ON alarm hours
	
	ON_alarm_info++;
	
	alarm_info_to_run_beep[1]= * ON_alarm_info;  //ON alarm minutes

	
    while (a == 0){
    	
      //Sleep(1000);
      sec++;
      if (sec > 59)
      {
      		cout << hour << ":" << min << ":" << sec <<endl;
            sec = 0;
            min++;
            
            if (min > 59)
            {
                  min = 00;
                  hour++;
                  
                  if (hour > 12)
                  {
                        hour = 00;
                  }
            }
      }
      if ( hour==alarm_info_to_run_beep[0] && min==alarm_info_to_run_beep[1] )   //comparing ON alarm timings with local timings
      {
			int * num;
			num = Alaram_clock::set_beep_data();
			int data[2];
			for (int i=0; i<2; i++)
			{
				data[i]=num[i];
			}
			//Beep(data[0], data[1]);
      		return;
	    }
    } 
}
 
int * Alaram_clock::set_alarm( Alaram_clock * dateobj, Alaram_clock * timeobj ){
	
	static int on_alarm_info[2];   //will return ON alarm number, its hour and minuutes
	int j;
	cout<<"\nWhich alarm you want to On? : ";
	cin>>j;
	
	
	if (j>5 || j<0){
		cout<<"\nThere are only five alarms available. \nPlease re-enter valid alarm number to on it.. : ";
		cin>>j;
	}
	
	
	
	bool x= dateobj->check_date(j);				//envoking check date ()
//	if ( x =='Y'){
//		Alarm_beep::set_alarm(dateobj,timeobj);
//	}
	
	int * get_timings = timeobj->check_time(j);		//got ON alarm hours
	on_alarm_info[0] = * get_timings;   						//saved ON alarm hours
	get_timings++;
	on_alarm_info[1] = * get_timings;							//saved ON alarm minutes
	
	return on_alarm_info;
	
}




int main()
{
	Alaram_clock * d1 = new Alaram_clock;
	
	d1->set_alarm_date();
	d1->show_date();
	
	Alaram_clock * t1= new Alaram_clock;
	t1->set_alarm_time();
	t1->show_time();
	
	Alaram_clock * ab1= new Alaram_clock;
	ab1->get_beep_data();
	ab1->set_beep_data();
	ab1->beeper( d1, t1 );

}

