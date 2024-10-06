#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

void push(int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

int pop() {
    if (head == NULL) {
        cout << "Stack Underflow." << endl;
        return -1;
    }
    int tempVal = head->data;
    Node* temp = head;
    head = head->next;
    delete temp;
    return tempVal;
}

void Top() {
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
    } else {
        cout << "Top of Stack: " << head->data << endl;
    }
}

void display() {  // New function to display all elements
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    }
    Node* temp = head;
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(1);
    cout << "After the first PUSH top of stack is: ";
    Top();

    push(5);
    cout << "After the second PUSH top of stack is: ";
    Top();

    display(); // Show all elements

    pop();
    cout << "After the first POP operation, top of stack is: ";
    Top();

    pop();
    cout << "After the second POP operation, top of stack is: ";
    Top();

    display(); // Show all elements

    pop(); // Show underflow error as stack will be empty

    return 0;
}
