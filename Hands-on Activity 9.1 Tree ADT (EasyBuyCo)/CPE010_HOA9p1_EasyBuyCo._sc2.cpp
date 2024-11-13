#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(Node* node) {
    if (node == nullptr) {
        return;
    }
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(Node* node) {
    if (node == nullptr) {
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}