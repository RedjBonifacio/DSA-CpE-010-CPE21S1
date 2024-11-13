#include <iostream>
using namespace std;

// Define the structure for a tree node with char data
struct Node {
    char data; // Change to char
    Node* left;
    Node* right;

    Node(char value) { // Constructor change
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Pre-order traversal
void preOrder(Node* node, char key, bool &found) {
    if (node == nullptr || found) {
        return;
    }
    if (node->data == key) {
        cout << key << " was found!" << endl;
        found = true;
        return;
    }
    preOrder(node->left, key, found);       // Traverse the left subtree
    preOrder(node->right, key, found);      // Traverse the right subtree
}

// In-order traversal
void inOrder(Node* node, char key, bool &found) {
    if (node == nullptr || found) {
        return;
    }
    inOrder(node->left, key, found);        // Traverse the left subtree
    if (node->data == key) {
        cout << key << " was found!" << endl;
        found = true;
        return;
    }
    inOrder(node->right, key, found);       // Traverse the right subtree
}

// Post-order traversal
void postOrder(Node* node, char key, bool &found) {
    if (node == nullptr || found) {
        return;
    }
    postOrder(node->left, key, found);      // Traverse the left subtree
    postOrder(node->right, key, found);     // Traverse the right subtree
    if (node->data == key) {
        cout << key << " was found!" << endl;
        found = true;
        return;
    }
}

// Function to find data using the chosen traversal method
void findData(Node* root, int choice, char key) {
    bool found = false;
    switch (choice) {
        case 1: // Pre-order
            preOrder(root, key, found);
            break;
        case 2: // In-order
            inOrder(root, key, found);
            break;
        case 3: // Post-order
            postOrder(root, key, found);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

// Main function to demonstrate the findData function
int main() {
    // Creating a simple binary tree
    Node* root = new Node('1');
    root->left = new Node('2');
    root->right = new Node('3');
    root->left->left = new Node('4');
    root->left->right = new Node('5');
    root->right->left = new Node('6'); // Node G
    root->right->right = new Node('7');

    // Adding a new leaf node "O" as a child of node G (which is 6)
    root->right->left->right = new Node('O'); // Adding node 'O' to the right of node 6

    // Example usage of findData function
    cout << "Searching for 'O' in Pre-order traversal: ";
    findData(root, 1, 'O'); // Pre-order search for key 'O'

    cout << "Searching for 'O' in In-order traversal: ";
    findData(root, 2, 'O'); // In-order search for key 'O'

    cout << "Searching for 'O' in Post-order traversal: ";
    findData(root, 3, 'O'); // Post-order search for key 'O'

    // Clean up memory (optional)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left->right; // Delete the new node 'O'
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0; // Properly end the main function
}