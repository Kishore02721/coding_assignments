/*Program to convert array into Binary search tree
and printing its pre-order, in-order and post-order
forms */

#include <iostream>
using namespace std;

//structure for a binary tree node
class Node {
public:
        int data;
        Node* left;
        Node* right;

        // Constructor to initialize a new node
        Node(int val) {
                data = val;
                left = nullptr;
                right = nullptr;
        }
};

// Function to insert a node into the BST
Node* insert(Node* root, int data);
//Pre-order traversal (Root, Left, Right)
void preOrder(Node* root);
//In-order traversal (Left, Root, Right)
void inOrder(Node* root);
//Post-order traversal (Left, Right, Root)
void postOrder(Node* root);

int main() {
        Node* root = nullptr;
        int values[] = {9, 4, 15, 6, 12, 17, 2};
        //To insert nodes into Tree
        for (int val : values) {
                root = insert(root, val);
        }
        cout << "Pre-Order: ";
        preOrder(root);
        cout << endl;
        cout << "In-Order: ";
        inOrder(root);
        cout << endl;
        cout << "Post-Order: ";
        postOrder(root);
        cout << endl;
        return 0;
}

// Function to insert a node into the BST
Node* insert(Node* root, int data) {
        if (root == nullptr) {
                return new Node(data);
        }

        if (data < root->data) {
                root->left = insert(root->left, data);
        } else {
                root->right = insert(root->right, data);
        }

        return root;
}

//Pre-order traversal (Root, Left, Right)
void preOrder(Node* root) {
        if (root != nullptr) {
                cout << root->data << " ";
                preOrder(root->left);
                preOrder(root->right);
        }
}

//In-order traversal (Left, Root, Right)
void inOrder(Node* root) {
        if (root != nullptr) {
                inOrder(root->left);
                cout << root->data << " ";
                inOrder(root->right);
        }
}

//Post-order traversal (Left, Right, Root)
void postOrder(Node* root) {
        if (root != nullptr) {
                postOrder(root->left);
                postOrder(root->right);
                cout << root->data << " ";
        }
}


