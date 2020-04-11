#include <iostream>
#include <string> 
#include<sstream>
using namespace std; 
string int_to_string(int street){
	stringstream ss;
	ss<<street;
	return ss.str();
}
class Address {
	public:
	int house_no;
	int street;
	string city;
	string country;
	string get_full_address();
};
string Address :: get_full_address(){
	{
		
		string str_street=int_to_string(street);
		string str_house_no=int_to_string(house_no);
		
		return "H .NO . "+ str_house_no + " " + "street "+ str_street + " "+city+ " " +country ;
	}
}

class Employee {
	public:
	string Name;
	string current_address;
	string permanenet_address;
	string set_current_address(int house_no,int street,string city,string country);
		
	
	string set_permanent_address(int house_no,int street,string city,string country);
		
	
	string  print_addresses( );
	
};
string Employee::set_current_address(int house_no,int street,string city,string country){
	string str_street1=int_to_string(street);
		string str_house_no1=int_to_string(house_no);
		
		
		current_address="H .NO . "+ str_house_no1 + " " + "street "+ str_street1 + " "+city+ " " +country ;
		return current_address;
}
string Employee::set_permanent_address(int house_no,int street,string city,string country){
	string str_street2=int_to_string(street);
		string str_house_no2=int_to_string(house_no);
		
		permanenet_address="H .NO . "+ str_house_no2 + " " + "street "+ str_street2 + " "+city+ " " +country ;
		return permanenet_address;
}
string Employee::print_addresses(){
		cout<<"current  address : "<<current_address<<endl;
		cout<<"parmanent address : "<<permanenet_address<<endl;
	
}
 class Wheel {
 	private:
 	string variable;
	
	public:
 		void set_wheel_state(string s);
 		
 	string get_wheel_state(){
 		return variable;
	 }
	
 	
 	
 }; 
void wheel::set_wheel_state(string s){
 			variable=s;
 			cout<<variable<<endl;
		 }
 

class  Car{
	private :
		string wheel[4];
		
	public:
		string set_car_to_moving()
		{
			
			for(int i = 0 ; i < 4 ; i ++)
			{
				wheel[i]="turning";
					cout<<wheel[i]<<endl;
			}
		}
			
		string set_car_to_stopped()
		{
			for(int i = 0  ; i < 4 ; i++)
			{
			
				wheel[i]="stopped";
				cout<<"hellow "<<endl;
				cout<<wheel[i]<<endl;
			
			}	
		}
			
		

};

int main() { 

    // Start of PART - 1  -----------------------
    /* Address a; 

    a.house_no = 4; 
    a.street = 25; 
    a.city = "Peshawar"; 
    a.country = "Pakistan";

     cout << a.get_full_address() << endl;*/

    // End of Part - 1    -----------------------*/




    // Start of PART - 2  -----------------------

     Employee e1; 
     e1.Name="iftkhar";

    e1.set_current_address(4, 25, "Peshawar", "Pakistan"); 
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
     e1.print_addresses();  

    // End of Part - 2     -----------------------*/




    // Start of PART - 3   -----------------------

    // Wheel w1; 
    // w1.set_wheel_state("Turning"); 
    //cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

    // Car c; 
    
     //c.set_car_to_moving(); 
    //c.print_car_wheels_state(); 

    //c.set_car_to_stopped(); 
    // c.print_car_wheels_state();

    // End of Part - 4     -----------------------
	return 0; 
}
