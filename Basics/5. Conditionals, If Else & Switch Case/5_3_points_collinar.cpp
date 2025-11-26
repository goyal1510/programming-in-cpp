#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;
    cout << "Enter x3 y3: ";
    cin >> x3 >> y3;

    // Compute side lengths
    double AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double CA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Semi-perimeter
    double s = (AB + BC + CA) / 2.0;

    // Heron's formula
    double area = sqrt(s * (s - AB) * (s - BC) * (s - CA));

    cout << "\nArea = " << area << endl;

    if (area == 0)
        cout << "The points are COLLINEAR." << endl;
    else
        cout << "The points are NOT collinear." << endl;

    return 0;
}
