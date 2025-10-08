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

void inOrder(Node *root) {
    stack<Node *> st;

    Node *current = root;

    while(current != nullptr || !st.empty()) {

        // STEP.1 : ADDING THE LEFT NODES TO THE STACK UNTIL WE REACH NULL
        while(current != nullptr) {
            st.push(current);
            current = current->left;
        }

        // AFTER REACHING THE LEFT-MOST NODE...HERE CURRENT IS EQUAL TO NULL. WE WILL UPDATE IT TO TOP ELEMENT AND POP IT OUT...
        
        current = st.top();
        st.pop();

        cout<<current->data<<" ";

        // NOW WE WILL CHECK FOR THE RIGHT CHILD IF IT EXIST. IF RIGHT CHILD ALSOP POINTS TO NULL...AGAIN TOP WILL BE REMOVED
        // AND PRINTED

        current = current->right;

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

    cout<<"Iterative In-Order traversal: "<<endl;
    inOrder(root);

    cout<<endl;

    system("pause");

    return 0;
}