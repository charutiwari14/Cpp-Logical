// Check if a number is a single-digit, double-digit, or more.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    if (n>=0 && n<10)
    {
        /* code */
        cout<<"Single digit number";
    }
    else if (n>9 && n<100)
    {
        /* code */
        cout<<"Double digit number";
    }
    else{
        cout<<"More than two";
    } 
}