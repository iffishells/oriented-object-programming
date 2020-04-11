#include<iostream>
#include<cstring>
using namespace std;

struct node{
	int val;
	node *next;
};
node *new_node(node *current , int new_node_val){
	node *n;
	n=new node;
	n->val=new_node_val;
	n->next=NULL;
	current ->next=n;
	
	return n;
}
void output(node *h){
	node *current=h;
	cout<<"[";
	
	while(current!=NULL){
		cout<<current->val<<endl;
		
		
		current=current->next;
	}
	cout<<"]";
}




int main(){
	node *head;
//	head=NULL;
	head->val=20;
	head->next=NULL;
	head=new node;
	node *current;
	head=current;
	current=new_node(current , 8);
	current=new_node(current , 16);
	current=new_node(current , 32);
	current=new_node(current , 64);
	current=new_node(current , 128);
	current=head;
	output(head);
}
