#include <iostream>
#include <vector>
#include <string>

class TreeNode {
public:
    char data;
    std::vector<TreeNode*> children;

    TreeNode(char value) : data(value) {}

    void addChild(TreeNode* child) {
        children.push_back(child);
    }
};

TreeNode* buildTree() {
    TreeNode* A = new TreeNode('A');
    TreeNode* B = new TreeNode('B');
    TreeNode* C = new TreeNode('C');
    TreeNode* D = new TreeNode('D');
    TreeNode* E = new TreeNode('E');
    TreeNode* F = new TreeNode('F');
    TreeNode* G = new TreeNode('G');
    TreeNode* H = new TreeNode('H');
    TreeNode* I = new TreeNode('I');
    TreeNode* J = new TreeNode('J');
    TreeNode* K = new TreeNode('K');
    TreeNode* L = new TreeNode('L');
    TreeNode* M = new TreeNode('M');
    TreeNode* N = new TreeNode('N');
    TreeNode* P = new TreeNode('P');
    TreeNode* Q = new TreeNode('Q');

    A->addChild(B);
    A->addChild(C);
    A->addChild(D);
    A->addChild(E);
    A->addChild(F);
    A->addChild(G);

    D->addChild(H);
    D->addChild(I);
    D->addChild(J);

    F->addChild(K);
    F->addChild(L);
    F->addChild(M);

    G->addChild(N);

    J->addChild(P);
    J->addChild(Q);

    return A;
}

int main() {
    TreeNode* root = buildTree();
    std::cout << "Tree built with root node: " << root->data << std::endl;
    return 0;
}


