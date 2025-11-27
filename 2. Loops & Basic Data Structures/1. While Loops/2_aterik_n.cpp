#include <iostream>
using namespace std;

int main(){
    int n, i=0;
    char c='*';
    cout<<"How many time you want to print '*' enter the value of n ? ";
    cin>>n;

    while(i < n){
        cout<<c<<endl;
        i++;
    }
    return 0;
}