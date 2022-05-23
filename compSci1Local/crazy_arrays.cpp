#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct studentType
    {

        string studentFName;

        string studentLName;

        int testScore;

        char grade;

    };

void getStudentData(studentType students[8]);

void assignGrade(studentType students[8]);

void printData(studentType students[8]);

int main() {
    
    studentType students[8];

    getStudentData(students);

    assignGrade(students);

    printData(students);

}

void getStudentData(studentType students[8]) {

    for (int i = 0; i < 8; i++) {

        cout << "Student First Name: ";
        cin >> students[i].studentFName;

        cout << "Student Last Name: ";
        cin >> students[i].studentLName;

        cout << "Student Test Score: ";
        cin >> students[i].testScore;

    }

}

void assignGrade(studentType students[]) {

    for (int i = 0; i < 8; i++) {

        if (students[i].testScore >= 90) {

            students[i].grade = 'A';

        }

        else if (students[i].testScore >= 80) {

            students[i].grade = 'B';

        }

        else if (students[i].testScore >= 70) {

            students[i].grade = 'C';

        }

        else if (students[i].testScore >= 60) {

            students[i].grade = 'D';

        }

        else {

            students[i].grade = 'F';

        }
    }

}

void printData(studentType students[]) {

    for (int i = 0; i < 8; i++) {

        cout << students[i].studentLName << ", " << students[i].studentFName << "\t\tGrade: " << students[i].grade << "\n";
    }

}