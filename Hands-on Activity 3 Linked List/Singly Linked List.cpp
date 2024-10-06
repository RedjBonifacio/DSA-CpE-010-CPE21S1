#include <iostream>
#include <utility>
using namespace std;

class Node {
public:
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

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* last = new Node();

    Node* temp = head;

    head->data = 'C';
    second->data = 'P';
    third->data = 'W';
    fourth->data = 'I';
    fifth->data = 'A';
    last->data = 'O';

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = last;
    last->next = nullptr;

    traversal(temp);

    return 0;
}
