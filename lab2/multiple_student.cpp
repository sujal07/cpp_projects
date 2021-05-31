#include<iostream>
using namespace std;

struct student{
    char name[20];
    int roll;
    char address[20];
};

int main(){
    student s[2];
    for (int i = 0; i < 3; i++) {
    cout<<"\n";
    cout<<"\nEnter details of Students:";
    cout<<"\nName:";
    cin>>s[i].name;
    cout<<"\nRoll no:";
    cin>>s[i].roll;
    cout<<"\nAdress:";
    cin>>s[i].address;
    }
    
    for (int i = 0; i < 3; i++) {
    cout<<"\nThe details of students";
    cout<<"\nName: " <<s[i].name;
    cout<<"\nRoll: " <<s[i].roll;
    cout<<"\nAddress: " <<s[i].address;
    }

}