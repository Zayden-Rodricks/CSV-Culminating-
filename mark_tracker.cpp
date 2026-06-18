#include <iostream>
using namespace std;

int main() {
    string kids[3] = {"Lebron", "Jordan", "Zayden"};
    string subjects[3] = {"Math", "English", "Science"};

    double marks[3][3][10] = {
        {
            {80, 75, 90},      //Lebron's math
            {70, 85, 88},      //Lebron's english 
            {92, 81, 79}       //lebron's science 
        },
        {
            {85, 70, 88},       //jordan's math 
            {90, 91, 84},       //jordan's english 
            {76, 80, 89}        //j science
        }, 
        {
            {60, 92, 78},       //z's math 
            {73, 69, 82},       //z's english 
            {88, 77, 91}         //z science
        }
    };

    int markCount[3][3] = {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };

    int choice = 0;

    while (choice != 5) {
        cout << endl;
        cout << "1. Add a test mark" << endl;
        cout << "2. Subject average" << endl;
        cout << "3. Class average" << endl;
        cout << "4. View all grades" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int kidNum;
            int subjectNum;
            double newMark;

            cout << "Pick kid: 0 = Lebron, 1 = Jordan, 2 = Zayden: ";
            cin >> kidNum;

            cout << "Pick subject: 0 = Math, 1 = English, 2 = Science: ";
            cin >> subjectNum;

            if (markCount[kidNum][subjectNum] < 10) {
                cout << "Enter new test mark: ";
                cin >> newMark;

                int testNum = markCount[kidNum][subjectNum];

                marks[kidNum][subjectNum][testNum] = newMark;
                markCount[kidNum][subjectNum]++;

                cout << "Mark added!" << endl;
                cout << kids[kidNum] << "'s " << subjects[subjectNum]
                     << " test " << testNum + 1 << " mark is "
                     << newMark << "%" << endl;
            } else {
                cout << "This subject already has 10 test marks." << endl;
            }
        }

        else if (choice == 2) {
            int subjectNum;
            double total = 0;
            int count = 0;

            cout << "Pick subject: 0 = Math, 1 = English, 2 = Science: ";
            cin >> subjectNum;

            for (int kid = 0; kid < 3; kid++) {
                for (int test = 0; test < markCount[kid][subjectNum]; test++) {
                    total = total + marks[kid][subjectNum][test];
                    count++;
                }
            }

            cout << subjects[subjectNum] << " average: " << total / count << "%" << endl;
        }

        else if (choice == 3) {
            double total = 0;
            int count = 0;

            for (int kid = 0; kid < 3; kid++) {
                for (int subject = 0; subject < 3; subject++) {
                    for (int test = 0; test < markCount[kid][subject]; test++) {
                        total = total + marks[kid][subject][test];
                        count++;
                    }
                }
            }

            cout << "Class average: " << total / count << "%" << endl;
        }

        else if (choice == 4) {
            for (int kid = 0; kid < 3; kid++) {
                cout << endl;
                cout << kids[kid] << "'s grades:" << endl;

                for (int subject = 0; subject < 3; subject++) {
                    cout << subjects[subject] << ": ";

                    for (int test = 0; test < markCount[kid][subject]; test++) {
                        cout << marks[kid][subject][test] << "% ";
                    }

                    cout << endl;
                }
            }
        }

        else if (choice == 5) {
            cout << "Goodbye!" << endl;
        }

        else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}