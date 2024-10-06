#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

void traversal(Node* temp) {
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
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

int main() {
    // Initializing the list
    Node* head = new Node();
    head->data = 'C';
    head->next = new Node();
    head->next->data = 'P';
    head->next->next = new Node();
    head->next->next->data = 'E';
    head->next->next->next = new Node();
    head->next->next->next->data = 'W';
    head->next->next->next->next = new Node();
    head->next->next->next->next->data = '1';
    head->next->next->next->next->next = new Node();
    head->next->next->next->next->next->data = '0';
    head->next->next->next->next->next->next = nullptr;

    cout << "Initial List: ";
    traversal(head);

    insertAtHead(head, 'G');
    cout << "After inserting 'G' at head: ";
    traversal(head);

    Node* temp = head->next->next; // Points to 'P' node
    insertAfter(temp, 'E');
    cout << "After inserting 'E' after 'P': ";
    traversal(head);

    deleteNode(head, 'C');
    cout << "After deleting 'C': ";
    traversal(head);

    deleteNode(head, 'P');
    cout << "After deleting 'P': ";
    traversal(head);

    return 0;
}
