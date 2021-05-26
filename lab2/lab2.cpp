#include<iostream>
using namespace std;

struct student{
    char name[20];
    int roll;
    char address[20];
};

int main(){
    student s;
    cout<<"Enter details of sStudents:";
    cout<<"Name:";
    cin.get(s.name,20);
    cout<<"\nRoll no:";
    cin>>s.roll;
    cout<<"\nAdress:";
    cin>>s.address;

    cout<<"\nName: " <<s.name;
    cout<<"\nRoll: " <<s.roll;
    cout<<"\nAddress: " <<s.address;

    return 0;

}