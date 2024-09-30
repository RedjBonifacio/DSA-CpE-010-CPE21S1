#include <iostream>

struct Node {
    int data; 
    Node* next;
};

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < 20; ++i) {
        if (isPrime(i)) {
            Node* newNode = new Node{ i, nullptr };
            if (!head) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
    }

    std::cout << "Prime numbers less than 20: ";
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << "\nHead: " << (head ? head->data : -1) 
              << ", Tail: " << (tail ? tail->data : -1) << "\n";


    return 0;
}

