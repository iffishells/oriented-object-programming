#include <iostream>
#include <string> 
using namespace std; 

int index(char *ptr , char needle);
int 	count_digits(char *ptr1);

int main() { 
    string haystack; 
    char needle;
	int size;  

    // Also try different values for the string and character
    haystack = "A quick brown fox (id: 45) jumped over a jlazy dog (id: 9)";
    //cout<<"lenght "<<haystack[]<<endl;
    
	 
	size=haystack.length();
    needle = 'j'; 

    int loc, count; 
    loc = index(&haystack[0], needle ); 
    cout << "Loc: " << loc << endl; 

   // count = count_digits(&haystack[0]); 
    //cout << "Count: " << count << endl;  

    return 0; 
}

int  index(char *ptr , char needle){
	int index=0;
	int new_index;
	bool pass=false;
	while(*ptr!='\0'){
		if(*ptr==needle){
			index=index+0;
			new_index=index;
			pass=true;
		}
		if(pass==true and *ptr == needle){
			
			return new_index;
		}
			
			
	ptr++;
	index++;
	}
	
	return -1;
}
int	count_digits(char *ptr1){
	int count1=0;
	bool pass=false;
	while(*ptr1!='\0'){
		if((int ) *ptr1 >=48 &&(int ) *ptr1<=57 ){
			count1++;
			pass=true;
		}
		ptr1++;
	}
	if(pass=true){
	return count1;
	}else{
		return count1 ;
	}
	
}
		



