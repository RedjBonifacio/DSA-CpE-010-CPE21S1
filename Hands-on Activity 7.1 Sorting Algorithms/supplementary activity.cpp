#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    vector<int> votes(100);
    for (int i = 0; i < 100; ++i) {
        votes[i] = rand() % 5 + 1;
    }

    int n = votes.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (votes[j] > votes[j + 1]) {
                int temp = votes[j];
                votes[j] = votes[j + 1];
                votes[j + 1] = temp;
            }
        }
    }


    int counts[5] = {0};
    for (int vote : votes) {
        counts[vote - 1]++;
    }

    int winner = 0;
    for (int i = 1; i < 5; ++i) {
        if (counts[i] > counts[winner]) {
            winner = i;
        }
    }
    
    winner += 1;

    cout << "Sorted votes array: ";
    for (int vote : votes) {
        cout << vote << " ";
    }
    cout << endl;

    cout << "Vote counts for each candidate: ";
    for (int i = 0; i < 5; ++i) {
        cout << "Candidate " << (i + 1) << ": " << counts[i] << " ";
    }
    cout << endl;

    cout << "The winning candidate is: Candidate " << winner << endl;

    return 0;
}


