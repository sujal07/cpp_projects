#include<iostream>
using namespace std;

int main(){
    float a,b,sum,product,quotient,difference;
    int x;
    cout<<"Enter operation";
    cout<<"\n1.Add \n2.Substract \n3.Multiply \n4.Divide\n";
    cin>>x;
    cout<<"Enter two numbers.\n";
    cin>>a;
    cin>>b;

    switch(x){
        case 1:
        sum=a+b;
        cout<<"The sum of two numbers is "<<sum;
        break;

        case 2:
        difference=a-b;
        cout<<"The difference of two numbers is "<<difference;
        break;

        case 3:
        product=a*b;
        cout<<"The product of two numbers is "<<product;
        break;

        case 4:
        quotient=a/b;
        cout<<"The quotient of first by second number is "<<quotient;
        break;

        default:
        cout<<"invalid";
        break;
    }
    return 0;
}