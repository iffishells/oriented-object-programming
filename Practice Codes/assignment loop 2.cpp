#include<iostream>
#include<string>
using namespace std;

void personal_information(){
	string Name, Middle_Name,surname,Gender,Marital_status,date_of_birth ;
	string idnumber,Nationality,country ,country_of_birth,country_of_birthb; 
	string id, secret_question,religion,Hobbies,Talent;
	bool flag=false,flag1=false;
	cout<<"---------personal Information--------------"<<endl;
	cout<<"Enter the Name : " ;
	cin>>Name;
	if(Name.size()>=5 && Name.size()<=8)
	{
		cout<<"Correct"<<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;
	}
	cout<<"Entered the Middle Name : "; 
	cin>>Middle_Name;
	if(Middle_Name.size()>=5 && Middle_Name.size()<=8)
	{
		cout<<"correct"<<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;	
	}
	cout<<"Enter the Surename : ";
	cin>>surname;
	if(surname.size()>=5 && surname.size()<=8)
	{
		cout<<"Correct"<<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;
	}
	cout<<"Enter the Gender  male/female: ";cin>>Gender;
	if(Gender.size()>=5 && Gender.size()<=8)
	{
		cout<<"Correct"<<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;		
	}
	cout<<"Enter the Marital_status marrried/single : " ;
	cin>>Marital_status;
	if(Marital_status.size()>=5 && Marital_status.size()<=8){
		cout<<"Correct "<<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;
		
	}
	cout<<"Enter the Date of birth like 9/3/1999 : ";cin>>date_of_birth;
	for(int i ; i<8 ;i++){
		if(date_of_birth[i]=='/'){
			flag=true;
		}
	}
	if (flag == true)
	{
		cout<<"Correct"  <<endl;
	}else
	{
		cout<<"Entered wrong value "<<endl;
	}
	cout<<"Enter the Nationality : ";
	cin>>Nationality;
	if(Nationality.size()>=5 && Nationality.size()<=10)
	{
		cout<<"correct "<<endl;
	}else
	{
		cout<<"Entered the wrong value "<<endl;
	}
	cout<<"Enter the country of birth : ";
	cin>>country_of_birth;
	if(country_of_birth.size()>5 && country_of_birth.size()<=8){
		cout<<"correct "<<endl;
	}
	else
	{
		cout<<"Entered the wrong value "<<endl;
	}
	cout<<"Enter the country Name : ";
	cin>>country;
	if(country.size()>=5 && country.size()<=8)
	{
		cout<<"Correct"<<endl;
		
	}
	else
	{
		cout<<"Entered the wrong value "<<endl;
	}
	cout<<"Enter the city of birth : ";
	cin>>country_of_birthb;
	if(country_of_birthb.size()>=3 && country_of_birthb.size()<=7)
	{
		cout<<"correct "<<endl;
	}else
	{
		cout<<"Entered the wrong value :"<<endl;
	}
	cout<<"Enter the type of your ID citizennumber/passport:";
	cin>>id;
	if(id.size()>=3 && id.size()<=8)
	{
		cout<<"Correct"<<endl;
		
	}
	else
	{
		cout<<"Entered the Wrong value ";
	}
	cout<<"Enter the Id number : ";
		cin>>idnumber;
	cout<<"Enter the Identification :/scret question ";
		cin>>secret_question;
	cout<<"Enter the religion islam/other :";
		cin>>religion;
	cout<<"--------------------Information on Hobbies---------------"<<endl;
	cout<<"Enter the information Hobbies : Animal/Astrology/Automotive etc :";
		cin>>Hobbies;
	cout<<"Enter the Special Talent Information arts/music/sports :";
		cin>>Talent;

cout<<"---------------------personal information close -----------------------"<<endl;

}
void family_information(){
	string mothername,fathername,income,ans,ans1,status,save;
	string siblings;
	bool first1=false;
	//bool first2=false;
	cout<<"Enter the Mother Name : ";
	cin>>mothername;
	if(mothername.size()>=3 && mothername.size()<=8)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the Wrong value :"<<endl;
	}
	cout<<"Enter the father Name : ";
	cin>>fathername;
	if(fathername.size()>=3 && fathername.size()<=8)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the Wrong value :"<<endl;
	}
	cout<<"Enter the number of siblings  1/2/3 : ";
	cin>>siblings;
	
	cout<<"Is your mother alive? yes/NO : ";
	cin>>ans;
	cout<<"is your father alive? yes/No : " ;
	cin>>ans1;
	cout<<"Enter the martial status : married/single ";
	cin>>status;
	cout<<"Enter total income of the Month : ";
	cin>>income;
	for(int i=0 ;i<income.length() ; i++)
	{
		if(income[i]=='$')
		{
			first1=true;
		}
	}
	if(first1==true)
	{
		cout<<"Correct " <<endl;
	}
	else
	{
		cout<<"Entered the Wrong value "<<endl;
	}
	cout<<"Do you want to save the information yes/No ";
	cin>> save ;
}
void contactinfo(){
	cout<<"contact information (Current) "<<endl;
	cout<<"---------------------------------"<<endl;
	string country,city,postalcode,phone,street,ans2;
	bool first2=false;
	cout<<"Enter the country Name : "; 
		cin>>country;
	if(country.size()>=3 && country.size()<=10)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the Wrong value "<<endl;
	}
	cout<<"Enter the City Name : ";
	cin>>city;
	if(city.size()>=3 && city.size()<=10)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the wrong value "<<endl;
	}
	cout<<"Enter the Postal code ";
		cin>>postalcode;
	if(postalcode.size()>3 && postalcode.size()<=10)
	{
		cout<<"Correct"<<endl;
	}
	else
	{
		cout<<"Entered the wrong value :"<<endl;
	}
	cout<<"Enter the phone Number : ";
	cin>>phone;
	for(int i=0; i<=phone.length(); i++)
	{
		if(phone[i]=='+')
		{
			first2=true;	
		}
		
	}
	if(first2=true)
		{
			cout<<"correct"<<endl;
		}
		else
		{
			cout<<"Entered the wrong value : "<<endl;
		}
	cout<<"Enter the street Number : " ; 
	cin>>street;
	if(street.size()>=3 && street.size()<=20)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the wrong value "<<endl;
	
	}
	cout<<"Please state how long you have been living on this address in months or years ." ;
	string nope;
	cin>>nope;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"How long you have been residing at this address : Month/years ";
	cin>>ans2;
	
	cout<<"                         Social Media                            "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	string facebook;
	bool flag=false;
	cout<<"Enter the link of  your facebook account   : " ;cin>>facebook;
	for(int i=0; i<facebook.length() ; i++)
	{
		if(facebook[i]=='.' &&  facebook[i]=='/' && facebook[i]=='h' && facebook[i]=='t' && facebook[i]=='t' && facebook[i]=='p'  )
		{
			flag==true;
		} 
	}
	if(flag==false)
	{
		cout<<"Correct "<<endl;
	}
	else
	{
		cout<<"Entered the wrong value :"<<endl;
	}
		
	
	
	cout<<"Permanent Residential Address "<<endl;
	cout<<"------------------------------"<<endl;
	
}
void Education_Information(){
	//        Education Information
	string Ename,Ecity,Eschool,Estatus,Edate,Egdate,description;
	bool boolname=false;
	bool boolname1=false; 
	bool boolname2=false;  
	bool boolname3=false; 
	bool boolname4=false;   
	cout<<"Middle school information  : "<<endl;
	do{
		cout<<"Enter country Name : ";
		cin>>Ename;
		if(Ename.size()>=3 && Ename.size()<=10)
		boolname=true;
		//cout<<"try again : "<<endl;
		
	}while(boolname==false);
	do{
		cout<<"Enter City Name : ";
		cin>>Ecity;
		if(Ecity.size()>=3 && Ecity.size()<=10)
		boolname1=true;
		//cout<<"try again : "<<endl;
		
	}while(boolname1==false);
	do{
		cout<<"Enter School Name : ";
		cin>>Ecity;
		if(Eschool.size()>=3 && Eschool.size()<=15)
		{
			boolname2=true;
		}
		
		
	}while(boolname2==true);
	cout<<"Enter the your status  ( continues/graduate ): ";
	cin>>Estatus;
	if(Estatus.size()>=3 && Estatus.size()<=12){
		cout<<"correct ";
	}else
	{
		cout<<"Entered wrong status ";
	}
	cout<<"Enter the start Date (like (3/5/1999)) :";
	cin>>Edate;
	for(int i=0; i<Edate.length() ; i++){
		if(Edate[i]='/')
		boolname3=true;
	}
	if(boolname3=true){
		cout<<"correct "<<endl;
	}else
	{
		cout<<"Entered wrong value : "<<endl;
	}
	cout<<"Enter the Graduation  Date (like (3/5/1999)) :";
	cin>>Egdate;
	for(int i=0; i<Egdate.length() ; i++){
		if(Egdate[i]='/')
		boolname4=true;
	}
	if(boolname4=true){
		cout<<"correct "<<endl;
	}else
	{
		cout<<"Entered wrong value : "<<endl;
	}
	cout<<"      Experiences in Other Countries        "<<endl;
	
	cout<<"Your country of nationality and the country in which you have completed your education is different."<<endl;
	cout<<"Please provide brief information on your education in that country"<<endl;
	cout<<"Enter the description : ";
	cin>>description;
	//------------------------------------Eduational information clear
	
	
}
void languages_details(){
	string native_language,native_language1,native_language_level,turkish_language_skill;
	cout<<"         Native language            "<<endl;
	cout<<"Enter your Native language          : ";
	cin>>native_language;
	cout<<"         other skills               "<<endl;
	cout<<"Enter the language                  : ";
	cin>>native_language1;
	cout<<"Enter the Level (lower,Middle ,High): ";
	cin>>native_language_level;
	cout<<"Do you have turkish language skill  : ";
	cin>>turkish_language_skill;
	
	

}
void work_experience(){
	cout<<"-------------------------work_experience---------------------------------"<<endl;
	string wcountry,institution,position,Employment_status,w_details,start_date,end_date;
	bool work=false;
	bool work1=false;
	cout<<"Enter country Name : ";
		cin>>wcountry;
	cout<<"Enter the institution Name : ";
		cin>>institution;
	if(institution.size()>=5 && institution.size()<=20){
		cout<<"Correct  "<<endl;
	}else{
		cout<<"Enter the Wrong pattern "<<endl;
	}
	cout<<"Enter the position (accountants,teaher ,student ) : ";
		cin>>position;
	cout<<"Enter Employment_status (i am currently working /left): ";
		cin>>Employment_status;
	cout<<"please give me details about your responsibilities at this job : ";
		cin>>w_details;
	cout<<"Enter the start date of this job : ";
		cin>>start_date;
	for(int i =0 ; i<start_date.size() ; i++){
		if(start_date[i]=='/'){
			work=true;
		}
	}
	if(work=true){
		cout<<"correct"<<endl;
	}else
	{
		cout<<"Enter the wrong pattern"<<endl;
	}
	cout<<"Enter the end date of this job : ";
		cin>>end_date;
	for(int i =0 ; i<end_date.size() ; i++){
		if(end_date[i]=='/'){
			work1=true;
		}
	}
	if(work1=true){
		cout<<"correct"<<endl;
	}else
	{
		cout<<"Enter the wrong pattern"<<endl;
	}
	
	
	
}
void academic_qualifition(){
	cout<<"                         academic_qualifition                            "<<endl;
	string exam_name,exam_date,academic_country;
	bool yes=false;
	cout<<"Enter Exam Name (law ,GAt ,Sat etc) : ";
		cin>>exam_name;
	if(exam_name=="law" || exam_name=="GAt" ||  exam_name=="Sat"){
		cout<<"correct "<<endl;
		
	}else
	{
		cout<<"Enter the wrong information "<<endl;
	}
	cout<<"Enter the Exam date : ";
		cin>>exam_date;
	for(int i =0 ; i<exam_date.size() ; i++){
		if(exam_date[i]=='/'){
			yes=true;
		}
	}
	if(yes=true){
		cout<<"correct"<<endl;
	}else
	{
		cout<<"Enter the wrong pattern"<<endl;
	}
	cout<<"Enter the country Name : ";
		cin>>academic_country ;
	if(academic_country=="paksitan" || academic_country=="india"||  academic_country=="dubai"){
		cout<<"correct "<<endl;
		
	}else
	{
		cout<<"Enter the wrong information "<<endl;
	}
	
	
}
	
void social_activity(){
	cout<<"                                   Social activities                         "<<endl;
	cout<<"Award, project ,certificate "<<endl;
	string name1;
	cout<<"select one of them : "<<endl;
		cin>>name1;
	if(name1=="award"){
		string name2,date1,insti,dsp;
		bool yes1=false;
			cout<<"Enter the Name : ";
				cin>>name2;
			cout<<"Enter the date : ";
				cin>>date1;
	for(int i =0 ; i<date1.size() ; i++)
	{	if(date1[i]=='/')
	{
		yes1=true;
		}
	}
	if(yes1=true)
	{
		cout<<"correct"<<endl;
	}
	else
	{
		cout<<"Enter the wrong pattern"<<endl;
	}
	cout<<"Enter the instituion Name :"<<endl;
		cin>>insti;
	if(insti.size()>=5 && insti.size()<=20){
		cout<<"Correct  "<<endl;
	}else{
		cout<<"Enter the Wrong pattern "<<endl;
	}
	cout<<"Enter the discription : "<<endl;
		cin>>dsp;
	}
	else if(name1=="certificate"){
		{
		string name3,date2,insti,dsp;
		bool yes01=false;
			cout<<"Enter the Name : ";
				cin>>name3;
			cout<<"Enter the date : ";
				cin>>date2;
	for(int i =0 ; i<date2.size() ; i++)
	{	if(date2[i]=='/')
	{
		yes01=true;
		}
	}
	if(yes01=false)
	{
		cout<<"correct"<<endl;
	}
	else
	{
		cout<<"Enter the wrong pattern"<<endl;
	}
	cout<<"Enter the instituion Name :"<<endl;
		cin>>insti;
	if(insti.size()>=5 && insti.size()<=20){
		cout<<"Correct  "<<endl;
	}else{
		cout<<"Enter the Wrong pattern "<<endl;
	}
	cout<<"Enter the discription : "<<endl;
		cin>>dsp;
	}

}

}
void turky_experince(){
	string question1,question2,question3;
	cout<<" Now you are in turky now or have you ever been in turky ? "<<endl;
		cin>>question1;
	cout<<"Do you have a relative who is currently or was previous a"<<endl;
	cout<<"holder of turkiye scholarship ?"<<endl;
		cin>>question2;
	cout<<"do you any relatives living in turkey ? "<<endl;
		cin>>question3;
	
	
}
void my_application(){
	cout<<"      My previous Application               "<<endl;
	cout<<"you have no previous applications"<<endl;
}
int main(){
	personal_information();
	family_information();
	contactinfo();
    Education_Information();
	languages_details();
	work_experience();
	academic_qualifition();
	social_activity();
	turky_experince();
	my_application();
	}
