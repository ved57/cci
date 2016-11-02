#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Node{
    Node* right;
    Node* left;
    int data;
};


void print_bst(Node* root){
    if (root==NULL)
    {
        return ;
    }   
    cout<<root->data<<"\t";
    print_bst(root->left);
    print_bst(root->right);
    return;
}

Node* construct_bst(int a[], int start, int end){
    if (start>end)
        return NULL;
    
    Node* root = new Node();
    int middle = (end+start)/2;
    root->data = a[middle]; 
    root->right = construct_bst(a,middle+1,end);
    root->left = construct_bst(a,start,middle-1);
    return root;
}

int main()
{    
    int a[] = {1,2,3,4,5,6,7};
    Node* root = construct_bst(a,0,sizeof a / sizeof(a[0])-1);
    print_bst(root);
    return 0;    
}
