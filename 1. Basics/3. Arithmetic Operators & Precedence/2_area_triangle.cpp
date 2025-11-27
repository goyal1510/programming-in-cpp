#include <iostream>
using namespace std;

int main(){
    int height, base;
    cout<<"Enter the value of height and base ? ";
    cin>>height>>base;
    float area;
    area = float(height) * float(base) / 2;
    cout<<"Area of triangle is : "<<area<<endl;
    
    return 0;
}