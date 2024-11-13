#include <iostream>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertNode(root, value);
    }

    void inOrderTraversal() {
        inOrder(root);
        cout << endl;
    }

    void preOrderTraversal() {
        preOrder(root);
        cout << endl;
    }

    void postOrderTraversal() {
        postOrder(root);
        cout << endl;
    }

private:
    TreeNode* root;

    TreeNode* insertNode(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }
        if (value < node->value) {
            node->left = insertNode(node->left, value);
        } else {
            node->right = insertNode(node->right, value);
        }
        return node;
    }

    void inOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }

    void preOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
};

int main() {
    BinarySearchTree bst;
    int values[] = {2, 3, 9, 18, 0, 1, 4, 5};

    for (int value : values) {
        bst.insert(value);
    }

    cout << "In-order traversal of the BST: ";
    bst.inOrderTraversal();

    cout << "Pre-order traversal of the BST: ";
    bst.preOrderTraversal();

    cout << "Post-order traversal of the BST: ";
    bst.postOrderTraversal();

    return 0;
}
#include <iostream>

using namespace std;

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insertNode(root, value);
    }

    void inOrderTraversal() {
        inOrder(root);
        cout << endl;
    }

    void preOrderTraversal() {
        preOrder(root);
        cout << endl;
    }

    void postOrderTraversal() {
        postOrder(root);
        cout << endl;
    }

private:
    TreeNode* root;

    TreeNode* insertNode(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }
        if (value < node->value) {
            node->left = insertNode(node->left, value);
        } else {
            node->right = insertNode(node->right, value);
        }
        return node;
    }

    void inOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        inOrder(node->left);
        cout << node->value << " ";
        inOrder(node->right);
    }

    void preOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->value << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout << node->value << " ";
    }
};

int main() {
    BinarySearchTree bst;
    int values[] = {2, 3, 9, 18, 0, 1, 4, 5};

    for (int value : values) {
        bst.insert(value);
    }

    cout << "In-order traversal of the BST: ";
    bst.inOrderTraversal();

    cout << "Pre-order traversal of the BST: ";
    bst.preOrderTraversal();

    cout << "Post-order traversal of the BST: ";
    bst.postOrderTraversal();

    return 0;
}
