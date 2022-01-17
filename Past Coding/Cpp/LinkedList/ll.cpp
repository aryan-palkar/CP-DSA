#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void pushBack(node* &head,int val){
    node *n = new node(val);
    node *temp = head;

    if(head == NULL){   
        head = n;
        return;
    }
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

void printlist(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void remove(node* &head, int key){
    if(head->data == key){
        node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node* temp = head;
    while(temp->next->data != key){
        if(temp == NULL){
            cout<<"key not found";
            return;
        }
        temp = temp->next;
        
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    return;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    //cout<<head<<endl;
    delete todelete;
}


void reverse(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* nextnode;
    while(curr !=  NULL){
        nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    head = prev;
    return;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL)
        return head;
    
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void deletenode(node* ptr){
    if(ptr->next == NULL){
        delete ptr;
        return;
    }
    node* temp = ptr;
    node* todelete = temp->next;
    temp->data = temp->next->data;
    temp->next = temp->next->next;
    delete todelete;
}

node* getPtr(node* head,int pos){
    node* temp = head;
    pos--;
    while(pos--){
        temp = temp->next;
    }
    return temp;
}
int main(){
    node* head = NULL;
    pushBack(head, 1);
    pushBack(head, 2);
    pushBack(head, 3);
    pushBack(head, 4);
    printlist(head);
    cout<<endl;
    // node* ptr = getPtr(head, 3);
    // deletenode(ptr);
    // printlist(head);
    return 0;
}