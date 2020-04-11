#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
/*	ifstream in_file;
	string line;
	int num;
	bool pass=false;
	double total;
	in_file.open("newfile.txt");
	if(in_file)
	{
		cout<< " file open to succeed " <<endl;
		system("cls");
	}
	while(!in_file.eof())
	{
	
	getline(in_file,line);
	cout<<line<<endl;
}
	in_file.close();
*/	
	ifstream in_file;
	string line;
	int num;
	bool pass=false;
	double total;
	in_file.open("newfile.txt");
	if(in_file)
	{
		cout<< " file open to succeed " <<endl;
		system("cls");
	}
	char save{};
	int z=0,x=0,c=0,v=0,b=0,n=0,m=0,a=0,s=0,d=0,f=0,g=0,h=0,j=0,k=0,l=0,q=0,w=0,e=0,r=0,t=0,y=0,u=0,i=0,o=0,p=0;
	while(in_file.get(save))
	{
	
	if(save=='a'|| save=='A')
	a++;
	else if(c=='b' || save=='B')
	b++;
	else if(save=='c'|| c=='save')
	c++;
	else if(save=='d' || save=='D')
	d++;
	else if(save=='f'|| save=='F')
	f++;
	else if(save=='g' || save=='G')
	g++;
	else if(save=='h'|| save=='H')
	h++;
	else if(save=='i' || save=='I')
	i++;
	else if(save=='j'|| save=='J')
	j++;
	else if(save=='k' || save=='K')
	k++;
	else if(save=='l'|| save=='L')
	l++;
	else if(save=='m' || save=='M')
	m++;
	else if(save=='n'|| save=='N')
	n++;
	else if(save=='o' || save=='O')
	o++;
	else if(save=='p'|| save=='P')
	p++;
	else if(save=='q' || save=='Q')
	q++;
	else if(save=='r'|| save=='R')
	r++;
	else if(save=='s' || save=='S')
	s++;
	else if(save=='t'|| save=='T')
	t++;
	else if(save=='u' || save=='U')
	u++;
	else if(save=='v'|| save=='V')
	v++;
	else if(save=='w' || save=='W')
	w++;
	else if(save=='x'|| save=='X')
	x++;
	else if(save=='y' || save=='Y')
	y++;
	else if(save=='z'|| save=='Z')
	z++; 
	
	}

	
	cout<< " Total of A : "<<a<<endl;
	cout<< " Total of B : "<<b<<endl;
	cout<< " Total of C : "<<c<<endl;
	cout<< " Total of D : "<<d<<endl;
	cout<< " Total of E : "<<e<<endl;
	cout<< " Total of F : "<<f<<endl;
	cout<< " Total of G : "<<g<<endl;
	cout<< " Total of H : "<<h<<endl;
	cout<< " Total of I : "<<i<<endl;
	cout<< " Total of J : "<<j<<endl;
	cout<< " Total of K : "<<k<<endl;
	cout<< " Total of L : "<<l<<endl;
	cout<< " Total of M : "<<m<<endl;
	cout<< " Total of N : "<<n<<endl;
	cout<< " Total of O : "<<o<<endl;
	cout<< " Total of P : "<<p<<endl;
	cout<< " Total of Q : "<<q<<endl;
	cout<< " Total of R : "<<r<<endl;
	cout<< " Total of S : "<<s<<endl;
	cout<< " Total of T : "<<t<<endl;
	cout<< " Total of U : "<<u<<endl;
	cout<< " Total of V : "<<v<<endl;
	cout<< " Total of W : "<<w<<endl;
	cout<< " Total of X : "<<x<<endl;
	cout<< " Total of Y : "<<y<<endl;
	cout<< " Total of Z : "<<z<<endl;
}
