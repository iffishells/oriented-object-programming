#include<iostream>
#include<string>
using namespace std;
//struct node {
//	int val;
//	node *next;
//	
//};
//node *created_node(node *current ,int new_node_value)
//{
//	node *n=new node;
//	n->val=new_node_value;
//	n->next=NULL;
//	current->next=n;
//	return n;
//}
//void show_list(node *current)
//{
//	cout<< " { ";
//	while(current!=NULL)
//	{
//		cout<<current->val<< " ";
//		current=current->next;
//	}
//	cout<< " } "<<endl;
//}
//void deleting_node(node *current)
//
//{ // [30 45 50 55 60 ]
//	node *temp=current->next->next->next;
//	current->next->next=current->next->next->next;
//	delete temp;
//	temp=NULL;
//}
//
//int main()
//{
//	node *head;
//	head=new node;
//	head->val=30;
//	head->next=NULL;
//	node *current;
//	current=head;
//	current=created_node(current , 45);
//	current=created_node(current , 50);
//	current=created_node(current , 55);
//	current=created_node(current , 60);
//	current=head;
//	show_list(current);
//	cout<< " value deleting from thr node : "<<current->next->next->val<<endl;
//	deleting_node(current);
//	current=head;
//	show_list(current);
//}
template<class T>
class List{
	private:
		struct node
		{
			T val;
			node *next;
			
		};
		node *head, *last;
		public:
			List();
			void pop(node *current);
			void show_list(node *current);
			void push(T val);
		
}; 
template<class T>
List<T>::List()
{
	head=last=NULL;
}
