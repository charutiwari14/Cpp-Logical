//Check if a year is a leap year or not.

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year:";
    cin>>year;

    if(year%4==0 && year%400==0){
        cout<<"Not leap year";
    }
    else
    {
        cout<<year<<" is a leap year";
    }
    
}