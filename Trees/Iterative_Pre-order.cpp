#include<iostream>
#include<stack>
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

void preOrder(Node *root) {

    if(root == nullptr) return;

    stack<Node *> s;  // CREATING AN EMPTY STACK
    s.push(root);

    while(!s.empty()) {
        Node *top = s.top();

        s.pop(); // REMOVE THE TOP ELEMENT...

        cout<<top->data<<" "; // PRINT IT'S VALUE

        // NOW GO FOR IT'S CHILDREN IF THEY EXIST...IN RIGHT TO LEFT ORDER...

        if(top->right != nullptr) {
            s.push(top->right);
        }

        if(top->left != nullptr) {
            s.push(top->left);
        }

     }

}


int main() {

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(8);
    root->right = new Node(7);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);

    cout<<"Iterative Pre-Order traversal: "<<endl;
    preOrder(root);

    cout<<endl;

    system("pause");

    return 0;
}