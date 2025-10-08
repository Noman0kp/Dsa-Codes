#include<iostream>
#include<queue>
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

void levelOrder(Node *root) {

    if(root == nullptr) return;
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {

        Node *current = q.front(); // GETTING THE FRONT-MOST ELEMENT
        
        q.pop(); // REMOVING THE FRONT ELEMENT;
        
        cout<<current->data<<" "; // PRINTING ITS VALUE
        
        // NOW WE WILL LOOK FOR ITS CHILDREN...AND IF TEY EXIST, WE PUSH THEM IN THE QUEUE

        if(current->left != nullptr) {
            q.push(current->left);
        }

        if(current->right != nullptr) {
            q.push(current->right);
        }
    }

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

    cout<<"Level-Order traversal: "<<endl;
    levelOrder(root);

    system("pause");

    return 0;
}