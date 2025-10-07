#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void inOrder(Node *root) {

    if(root == nullptr) {
        return;
    }    

    inOrder(root->left);
    inOrder(root->right);
    cout<<(root->data)<<" ";
}

int main() {
 Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(8);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    cout<<"inOrder : "<<endl;

    inOrder(root);
    cout<<endl;
    system("pause");
}