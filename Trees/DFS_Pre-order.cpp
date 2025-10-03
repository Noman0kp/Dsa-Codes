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

/* THIS FXN WILL BE CALLED FOR THE ROOT NODE OF EVERY SUBTREE...IT WILL PRINT THE DATA AND MOVE TO THE LEFT NODE...IF FOUND 
NULL, IT'LL BACKTRACK AND GO TO RIGHT...*/

void preOrder(Node *root) {
    if(root == nullptr) return;

    cout<<(root->data)<<" ";
    preOrder(root->left);
    preOrder(root->right);

    cout<<endl;
}


int main() {

    // BUILDING A TREE...

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);


    cout<<"Pre-order traversal : "<<endl;
    preOrder(root);

    system("pause");
    return 0;

}