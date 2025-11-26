#include <iostream>
using namespace std;

int main(){
    int radius;
    float s_area, volume, PI;
    PI = (float)22/7;
    cout<<"Enter the value of radius ? ";
    cin>>radius;

    s_area = 4 * PI * radius * radius;
    volume = (4.0/3) * PI * radius * radius * radius;

    cout<<s_area<<endl;
    cout<<volume<<endl;

    
    
    return 0;
}