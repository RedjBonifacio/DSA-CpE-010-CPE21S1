#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    vector<int> votes(100);

    for (int& vote : votes) {
        vote = rand() % 5 + 1;
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
    
    cout << "Vote counts for each candidate:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Candidate " << (i + 1) << ": " << counts[i] << "\n";
    }

    cout << "The winning candidate is: Candidate " << (winner + 1) << endl;

    return 0;
}


