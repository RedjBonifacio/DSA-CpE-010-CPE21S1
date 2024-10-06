#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

void traversal(Node* temp) {
    Node* current = temp;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void insertAtHead(Node*& head, char newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void insertAfter(Node* prevNode, char newData) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void insertAtEnd(Node*& head, char newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
        return;
    }
    
    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}

void deleteNode(Node*& head, char key) {
    Node* temp = head;
    Node* prev = nullptr;
    
    if (temp != nullptr && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }
    
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == nullptr) return;
    
    prev->next = temp->next;
    delete temp;
}
