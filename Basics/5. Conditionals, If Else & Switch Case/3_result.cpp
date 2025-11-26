#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your exam score (0–100): ";
    cin >> score;

    cout << "\n--- EXAM RESULT ---\n";

    if (score >= 90 && score <= 100) {
        cout << "Grade: A\nExcellent Performance!" << endl;
    }
    else if (score >= 80) {
        cout << "Grade: B\nVery Good!" << endl;
    }
    else if (score >= 70) {
        cout << "Grade: C\nGood Work!" << endl;
    }
    else if (score >= 60) {
        cout << "Grade: D\nYou Passed." << endl;
    }
    else if (score >= 0) {
        cout << "Grade: F\nFailed. Try again!" << endl;
    }
    else {
        cout << "Invalid score entered!" << endl;
    }

    return 0;
}
