#include <iostream>
using namespace std;
int main(){
    int n;
    float average;
    cout<<"How many numbers to want to enter ? ";
    cin>>n;

    int val;
    int sum=0;
    for(int i = 0; i<n;i++){
        cout<<"Enter the number ? ";
        cin>>val;
        sum += val;
    }

    average = float(sum)/n;
    cout<<"Average of the numbers you entered is "<<average<<endl;
    return 0;
}