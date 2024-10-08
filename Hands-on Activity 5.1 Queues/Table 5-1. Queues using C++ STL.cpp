#include <iostream>
#include <queue>
#include <string>

using namespace std;

void display(queue<string> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    string students[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    queue<string> studentQueue;

    // Pushing elements to the queue and displaying it after each push
    for (int i = 0; i < 5; i++) {
        studentQueue.push(students[i]);
        cout << "After pushing " << students[i] << ": ";
        display(studentQueue);
    }

    // Displaying queue properties
    cout << "Is the queue empty? " << (studentQueue.empty() ? "Yes" : "No") << endl;
    cout << "Size of the queue: " << studentQueue.size() << endl;
    cout << "Front element: " << studentQueue.front() << endl;
    cout << "Back element: " << studentQueue.back() << endl;

    // Popping an element and displaying the queue after
    studentQueue.pop();
    cout << "After popping an element: ";
    display(studentQueue);

    return 0;
}
