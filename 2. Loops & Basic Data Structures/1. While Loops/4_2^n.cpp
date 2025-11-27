#include <iostream>
using namespace std;

int main(){
    int n, i=0;
    long long int val = 1;
    cout<<"We are going to calculate the 2^n ? enter the value of n ? ";
    cin>>n;

    while(i < n){
        val *= 2;
        i++;
    }
    cout<<"Value of 2^"<<n<<" is "<<val<<endl;
    return 0;
}