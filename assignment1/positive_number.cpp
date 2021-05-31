#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number";
    cin>>number;
    if(number>0)
    cout<<"The number is "<<number;
    else
    number=-number;
    cout<<"The number is "<<number;
    return 0;
}