#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    n1 = 1000;
    
    cout<<(n1+=5)<<endl; // n1 = n1 + 5
    cout<<(n1-=5)<<endl; // n1 = n1 - 5
    cout<<(n1/=5)<<endl; // n1 = n1 / 5
    cout<<(n1*=5)<<endl; // n1 = n1 * 5
    cout<<(n1%=5)<<endl; // n1 = n1 % 5
    

    return 0;
}