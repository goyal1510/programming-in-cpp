#include <iostream>
using namespace std;
int main() {
    int choice;
    int a, b;
    while (true) {
        cout << "\n--- Simple Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Thank you! Exiting...\n";
            break;   // exit the loop
        }
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Please choose between 1 and 5.\n";
            continue;
        }
        cout << "Enter numbers ? ";
        cin>>a>>b;
        switch (choice) {
            case 1:
                cout << "Result = " << a + b << endl;
                break;
            case 2:
                cout << "Result = " << a - b << endl;
                break;
            case 3:
                cout << "Result = " << a * b << endl;
                break;
            case 4:
                if (b == 0) {
                    cout << "Error: Cannot divide by zero!\n";
                } else {
                    cout << "Result = " << a / b << endl;
                }
                break;
        }
    }
    return 0;
}