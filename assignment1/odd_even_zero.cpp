#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    if(n==0)
    cout<<"The number is 0";
    else if(n%2==0)
    cout<<"The number is even";
    else 
    cout<<"The number is odd";
    return 0;
}