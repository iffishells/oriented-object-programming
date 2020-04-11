#include <iostream>
#include <fstream>


using namespace std;
struct  modify_data{
	int sr_no;
	string planet,population;
	double  gravity;
};

int main(){
	modify_data data[5];
		ifstream fin;
		fin.open("planet.txt");
		if(fin.fail()){
			cout<<"file is ready "<<endl;
		}
		else {
			cout<<"file is not ready "<<endl;
		}
		int index;
			while(fin){
				fin>>data[index].sr_no;
				fin>>data[index].planet;
				fin>>data[index].population;
				fin>>data[index].gravity;
				index++;
			}
				fin.close();
		
		for(int i=0 ; i<5 ; i++){
			cout<<data[i].sr_no<<" "<<data[i].planet<<" "<<data[i].population<<" "<<data[i].gravity<<endl;
		}
	}

