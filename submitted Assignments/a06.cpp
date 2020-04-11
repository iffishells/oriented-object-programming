 // Templates -- called 'generics' in Java 
#include <iostream> 
using namespace std; 

class List { 
private:
    
    struct node { 
        int val; 
        node *next; 
    };

    node *head, *last ;
    

    int do_sum(node *current)
    {
        cout<< "check1" <<endl;
        if(!head)
            return 0;
            head->val=head->val+current->val;
        do_sum(head->next);
        cout<< "head  " << head->val<<endl;
    }


    public:
    List();
    void push(int val) ; 
    void print_list();  
    

    int get_sum()
    {
        cout<<"check 0" <<endl;
        do_sum(head);

    }
};

List::List() { 
    last = head = NULL; 
}

void List::push(int val) { 
    node *temp = new node; 
    temp->val = val;
    temp->next = NULL; 

    if (last == NULL) {         // need this when list is empty
        head = temp; 
        last = temp; 
    } else {                    // for all other cases 
        last->next = temp; 
        last = last->next; 
    } 
}




void List::print_list() { 
    node *current = head; 
    cout << "[ " ; 
    while (current != NULL) { 
        cout << current->val << " "; 

        current = current->next; 
    }
    cout << "]" << endl; 
}
// int do_sum(node *current){
//     cout<<"check " <<endl;
// }
// int List ::get_sum(){
//     List m;
//     node *current;
//     current=head;
//     cout<<current->val;
//     m.do_sum();

// }



int main() { 
    List l; 

    l.push(5);          
    l.push(15);
    l.push(30);
    l.push(32);
    l.push(3);
    l.push(29);
    l.print_list(); 
    l.get_sum();

    //cout << "Sum = " << l.get_sum() << endl; 

    return 0; 
}
