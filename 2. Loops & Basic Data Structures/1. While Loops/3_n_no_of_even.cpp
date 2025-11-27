#include <iostream>
using namespace std;

int main(){
    int n, i=0;
    int val = 0;
    cout<<"How many even no. you want to print ? enter the value of n ? ";
    cin>>n;

    while(i < n){
        cout<<val<<endl;
        val += 2;
        i++;
    }
    return 0;
}