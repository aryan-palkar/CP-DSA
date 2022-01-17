#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *left, *right;

        node(int val){
            data = val;
            left = nullptr;
            right= nullptr;
    }
};

void printPreOrder(node* root){
    //base case
    if(root == nullptr)
        return;
    //recursice case
    cout<<root->data;
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node* root){
    //base case
    if(root == nullptr)
        return;
    //recursive case
    printInOrder(root->left);
    cout<<root->data;
    printInOrder(root->right);
}

void printPostOrder(node* root){
    //base case
    if(root == nullptr)
        return;
    //recursive case
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data;
}

int count(node* root){
    //base case
    if(root == nullptr)
        return 0;
    //recursive case
    int leftcount = count(root->left);
    int rightcount = count(root->right);
    return leftcount + rightcount + 1;
}

int sum(node* root){
    //base case
    if(root == nullptr)
        return 0;
    //recursive case
    return  sum(root->left), sum(root->right)+ 1;
}

int height(node* root){
    //base case
    if(root == nullptr)
        return 0;
    //recursive case
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0; 
    }

    int lh = 0, rh = 0;
    int ld = diameter(root->left, &lh);
    int rd = diameter(root->right, &rh);

    return max(lh + rh + 1, max(ld, rd));    
}

bool ifBalanced(node* root)
{
    
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right= new node(3);
    root->left->left  = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right= new node(7);
    root->left->left->left = new node(8);
    // printPreOrder(root);
    // cout<<endl;
    // printInOrder(root);
    // cout<<endl;
    // printPostOrder(root);
    // cout<<height(root);
    int h = 0;
    cout<<diameter(root, &h);
}

/*
         1
      2     3 
    4  5   6  7
  8  
*/