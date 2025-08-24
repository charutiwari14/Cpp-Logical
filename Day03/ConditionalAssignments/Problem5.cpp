#include<iostream>
using namespace std;
int main(){
// Take a character input and check if it is a vowel or consonant.
    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
    
    return 0;
}