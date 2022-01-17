#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL){
        head = n;
    }
}


int main()
{
    node* head = NULL;
    insertAtTail(head, 5);
    cout<<head->data;
    return 0;
}