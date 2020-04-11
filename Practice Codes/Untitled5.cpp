#include<iostream>
#include<string>
using namespace std;
class ilyas_bhai
{
	private:
		int age_of_ilyas_bhai;
		int number_of_sibling;
		int number_of_wife;
	public:
		ilyas_bhai()
		{
			age_of_ilyas_bhai=42; 
			number_of_sibling=2;
			number_of_wife=2; 
		}
		void laraii()
		{
			cout<< " when the ilyas bhai is need of money then no body help him " <<endl;
		}
		void family()
		{
			cout<<" age of  ilyas bhai " <<age_of_ilyas_bhai <<endl;
			cout<< " Number of sibling  "<<number_of_sibling <<endl; 
			cout<< " Number of wife  " << number_of_wife <<endl;
		}
		void nuture()
		{
			cout<< " As a nature! very Good bro but JO baat khety hai khud un per ammal ni karty "<<endl;
		}
};
class Nisar_bhai : public ilyas_bhai
{
	private:
		int age_of_Nisar_bhai;
		int number_of_sibling;
		int number_of_wife;
	public:
		Nisar_bhai()
		{
			age_of_Nisar_bhai=40;
			number_of_sibling=4;
			number_of_wife=2; 
		}
		void laraii()
		{
			cout<< " About laraii " <<endl;
			cout<< " Danda damag ,ishaq bhai khety hai satrabri boll hai " <<endl;
			cout<< " As a bro : ishaq nor walk in the race of life " <<endl;
			cout<<endl;
			cout << "About Married "<<endl;
			cout<< " No idea Sir! may bhe shadi kii ho (phatan ) " <<endl;
		}
		void family()
		{
			cout<<" age of  ilyas bhai : " <<age_of_Nisar_bhai <<endl;
			cout<<" Number of sibling  : "<<number_of_sibling <<endl; 
			cout<<" Number of wife  : " << number_of_wife <<endl;
		}
		void nature()
		{
			cout<< " Rationalbase(Haqiqat passand ) Apni biwi bacho k liye thic hai "<<endl;
			cout<< " Dua bhoot karwayat hai  " <<endl;
			cout<<" but ik baat! Nisar bhai dusry ki help ni karta hai or dusro say umeed rakhta hai "<<endl;
			cout<< " k dusry log is ki help kary ghy  " <<endl; 
		}
		
};
class ishaq_bhai : public ilyas_bhai
{
	private:
		int age_of_ishaq_bhai;
		int number_of_sibling;
		int number_of_wife;
	public:
	ishaq_bhai()
	{
		age_of_ishaq_bhai=36;
	 	number_of_sibling=2;
		number_of_wife=2;
	
	}
	void family()
	{
		cout<< " ishaq bhai niyat ka acha hai " <<endl;
		cout<< " ishaq bhai batameez bhoot hai "<<endl;
		cout<< " underestimate to other people "<<endl;
		cout<< " or Haan! mazy ki baat bhai Do wife " <<endl;
		cout<< " one of this Ziyada Sultan and phatan " <<endl;

	}
};
ilyas_bhai *select()
{
	ilyas_bhai *ptr;
	cout<<" Enter the number  : " <<endl; 
	cout<<" 1 : ilyas bhai " <<endl;
	cout<<" 2 : Nisar Bhai "<<endl;
	cout<<" 3 : ishaq Bhai "<<endl; 
	int number;
	cin>>name;
	if(name==1)
	{
		ptr=new ilyas bhai;
		
	}
	else if(name== 2 )
		ptr=new Nisar_bhai;
	else if(name==)
	
	
}
int main()
{
	ilyas_bhai object;
	object.laraii();
	object.family();
	
}

