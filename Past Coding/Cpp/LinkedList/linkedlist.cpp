#include<iostream>  
using namespace std;

class node{
   public:
   int data;
   node* next;
   node(int val){    //constructor of node
       data=val;
       next=NULL;
   }
};

void  display( node* head)   {   
     node* temp = head;
    while( temp!=NULL){                      
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* mergeSortedLL(node* t1,node* t2){

    // if one LL is zero return other
     if(t1==NULL) return t2;
     if(t2==NULL) return t1;
    
    node* dummynode = new node(-1);
    node* mergedptr = dummynode;

    while(t1 != NULL && t2 != NULL){
        if(t1->data < t2->data){
            mergedptr->next = t1;
            t1 = t1->next;
        }else{
            mergedptr->next = t2;
            t2 = t2->next;
        }
        mergedptr = mergedptr->next;
    }
    while(t1 = NULL){
        mergedptr->next = t1;
        t1 = t1->next;
        mergedptr = mergedptr->next;
    }

    while(t2 = NULL){
        mergedptr->next = t2;
        t2 = t2->next;
        mergedptr = mergedptr->next;
    }
    
      return mergedptr -> next; 
}

void  insertAtTail( node* &head, int val){  
    node* n = new node(val);     //allocating a new node in memory (new == malloc)

    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;     //copying head to temp var.
    while( temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

int main(){
    node* head1 =NULL;
     insertAtTail(head1,1);
     insertAtTail(head1,5);
     insertAtTail(head1,10);
     insertAtTail(head1,15);
     display(head1);

    node* head2 =NULL;
     insertAtTail(head2,2);
     insertAtTail(head2,8);
     insertAtTail(head2,12);
     display(head2);
      
     node * head3 = mergeSortedLL(head1, head2);
    
     display(head3);
     return 0;
}