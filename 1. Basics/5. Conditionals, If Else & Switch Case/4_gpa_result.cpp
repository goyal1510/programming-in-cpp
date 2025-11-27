#include <iostream>
using namespace std;

int main() {
    int code;

    cout << "Enter GPA code (1, 2, 3, 4, 0): ";
    cin >> code;

    cout << "\n--- GPA RESULT ---\n";

    switch (code) {
        case 4:
            cout << "GPA: 4.0 (Excellent)" << endl;
            break;

        case 3:
            cout << "GPA: 3.0 (Very Good)" << endl;
            break;

        case 2:
            cout << "GPA: 2.0 (Good)" << endl;
            break;

        case 1:
            cout << "GPA: 1.0 (Pass)" << endl;
            break;

        case 0:
            cout << "GPA: 0.0 (Fail)" << endl;
            break;

        default:
            cout << "Invalid GPA code!" << endl;
    }

    return 0;
}
