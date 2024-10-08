#include <iostream>
#include <stdexcept>

template <typename T>
class CircularQueue {
private:
    T* q_array;
    size_t q_capacity;
    size_t q_size;
    size_t q_front;
    size_t q_back;

public:
    CircularQueue(size_t capacity) 
        : q_capacity(capacity), q_size(0), q_front(0), q_back(0) {
        q_array = new T[capacity];
    }

    ~CircularQueue() {
        delete[] q_array;
    }

    bool Empty() const {
        return q_size == 0;
    }

    size_t Size() const {
        return q_size;
    }

    void Clear() {
        q_size = 0;
        q_front = 0;
        q_back = 0;
    }

    T& Front() {
        if (Empty()) throw std::runtime_error("Queue is empty");
        return q_array[q_front];
    }

    T& Back() {
        if (Empty()) throw std::runtime_error("Queue is empty");
        return q_array[(q_back + q_capacity - 1) % q_capacity];
    }

    void Enqueue(const T& item) {
        if (q_size == q_capacity) throw std::runtime_error("Queue is full");
        q_array[q_back] = item;
        q_back = (q_back + 1) % q_capacity;
        ++q_size;
    }

    void Dequeue() {
        if (Empty()) throw std::runtime_error("Queue is empty");
        q_front = (q_front + 1) % q_capacity;
        --q_size;
    }

    // Copy constructor
    CircularQueue(const CircularQueue& other) 
        : q_capacity(other.q_capacity), q_size(other.q_size), 
          q_front(other.q_front), q_back(other.q_back) {
        q_array = new T[q_capacity];
        for (size_t i = 0; i < q_size; ++i) {
            q_array[(q_front + i) % q_capacity] = other.q_array[(other.q_front + i) % other.q_capacity];
        }
    }

    // Copy assignment operator
    CircularQueue& operator=(const CircularQueue& other) {
        if (this != &other) {
            delete[] q_array;
            q_capacity = other.q_capacity;
            q_size = other.q_size;
            q_front = other.q_front;
            q_back = other.q_back;
            q_array = new T[q_capacity];
            for (size_t i = 0; i < q_size; ++i) {
                q_array[(q_front + i) % q_capacity] = other.q_array[(other.q_front + i) % other.q_capacity];
            }
        }
        return *this;
    }
};

int main() {
    CircularQueue<int> queue(5);  // Queue with a capacity of 5

    // Test Enqueue
    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);

    // Test Size and Front/Back
    std::cout << "Size: " << queue.Size() << ", Front: " << queue.Front() << ", Back: " << queue.Back() << std::endl;

    // Test Dequeue
    queue.Dequeue();
    std::cout << "After Dequeue - Size: " << queue.Size() << ", Front: " << queue.Front() << std::endl;

    // Test Clear
    queue.Clear();
    std::cout << "After Clear - Size: " << queue.Size() << std::endl;

    return 0;
}
