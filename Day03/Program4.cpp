#include<iostream>
using namespace std;

int main(){
// Check whether a person is eligible to vote (age ≥ 18).
    int age;
    cout<<"Enter your age:";
    cin>>age;

    if(age>=18){
        cout<<"Eligible to vote";
    }
    else{
        cout<<"Not eligible to vote";
    }
    return 0; 
}