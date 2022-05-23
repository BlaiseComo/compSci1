#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string president_names[5] = {};
    int president_votes[5] = {};

    double total_votes = 0;

    for (int i = 0; i < 5; i++) {

        string president_name;
        int president_votes_1;

        cout << "Input last name of president: ";
        cin >> president_name;

        cout << "Input number of votes: ";
        cin >> president_votes_1;

        president_names[i] = president_name;

        president_votes[i] = president_votes_1;

    }

    cout << setw(20) << "Candidate" << setw(20) << "Votes" << setw(20) << "Percent of Votes" << "\n";

    for (int y = 0; y < 5; y++) {

        total_votes += president_votes[y];

    }

    for (int x = 0; x < 5; x++) {

        cout << fixed << showpoint << setprecision(2);

        cout << setw(20) << president_names[x] << setw(20) << president_votes[x] << setw(20) << (president_votes[x] / total_votes) * 100.0 << "\n";

    }

    cout << "Total Votes: " << total_votes << "\n";

    int huh = 0;

    int huh_2;

    for (int i = 0; i < 5; i++) {

        if (president_votes[i] > huh) {

            huh = president_votes[i];

            huh_2 = i;

        }

    }

    cout << "The winning candidate is: " << president_names[huh_2] << " with " << huh << " votes!\n";


}