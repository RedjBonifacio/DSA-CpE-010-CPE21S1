#include <iostream>
#include <string>

class Job {
public:
    int jobID;
    std::string user;
    int pages;

    Job(int id, std::string u, int p) : jobID(id), user(u), pages(p) {}
};

class Node {
public:
    Job* job;
    Node* next;

    Node(Job* j) : job(j), next(nullptr) {}
};

class Printer {
private:
    Node* front;
    Node* rear;

public:
    Printer() : front(nullptr), rear(nullptr) {}

    void addJob(Job* newJob) {
        Node* temp = new Node(newJob);
        if (rear == nullptr) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        std::cout << "Job " << newJob->jobID << " added by " << newJob->user << "\n";
    }

    void processJob() {
        if (front == nullptr) {
            std::cout << "No jobs to process.\n";
            return;
        }
        
        Node* temp = front;
        std::cout << "Processing Job " << temp->job->jobID << " for " << temp->job->user 
                  << " (" << temp->job->pages << " pages).\n";
        
        front = front->next;
        
        if (front == nullptr)
            rear = nullptr;
        
        delete temp->job;
        delete temp;
    }

    bool hasPendingJobs() const {
        return front != nullptr;
    }
};

int main() {
    Printer printer;

    printer.addJob(new Job(1, "LeBron", 10));
    printer.addJob(new Job(2, "Kobe", 5));
    printer.addJob(new Job(3, "Kevin", 20));

    while (printer.hasPendingJobs()) {
        printer.processJob();
    }

    return 0;
}
