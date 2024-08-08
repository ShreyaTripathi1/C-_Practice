#include <iostream>
#include <vector>
using namespace std;

class Election {
private:
    int team1_votes;
    int team2_votes;
    int team3_votes;
    int team4_votes;
    int team5_votes;
    int spoiltBallots;
    int numVoters;

public:
    Election() : team1_votes(0), team2_votes(0), team3_votes(0), team4_votes(0), team5_votes(0), spoiltBallots(0), numVoters(0) {}

    void inputNumVoters() {
        cout << "Enter the number of voters: ";
        cin >> numVoters;
    }

    void castVotes() {
        for (int i = 1; i <= numVoters; i++) {
            int vote;
            cout << i << " Person vote: ";
            cin >> vote;
            processVote(vote);
        }
    }

    void processVote(int vote) {
        switch(vote) {
            case 1: team1_votes++; break;
            case 2: team2_votes++; break;
            case 3: team3_votes++; break;
            case 4: team4_votes++; break;
            case 5: team5_votes++; break;
            default: spoiltBallots++;
        }
    }

    void displayResults() const {
        cout << "Vote count for each candidate:" << endl;
        cout << "Team 1 votes: " << team1_votes << endl;
        cout << "Team 2 votes: " << team2_votes << endl;
        cout << "Team 3 votes: " << team3_votes << endl;
        cout << "Team 4 votes: " << team4_votes << endl;
        cout << "Team 5 votes: " << team5_votes << endl;
        cout << "Number of spoilt ballots: " << spoiltBallots << endl;
    }
};

int main() {
    Election election;
    election.inputNumVoters();
    election.castVotes();
    election.displayResults();

    return 0;
}
