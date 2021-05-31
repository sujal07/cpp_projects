#include<iostream>
using namespace std;

int main(){
    int n,sum,i;
    cout<<"Enter N which sum of natural numbers is to be found.";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    cout<<"The sum of n natural numbers is "<<sum;
    return 0;
}