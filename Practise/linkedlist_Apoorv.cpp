#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    
    if(head==NULL){
       head = n;
        return;
    }

    node* temp = head; 
    
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = new node(3);
    // insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
return 0;
}