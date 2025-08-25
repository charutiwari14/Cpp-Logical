// Check whether a person is a child, teenager, adult, or senior (based on age ranges).

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age:";
    cin >> age;

    if (age <= 3)
    {
        cout << "A baby";
    }
    else if (age <= 10)
    {
        cout << "A child";
    }
    else if (age < 18)
    {
        cout << "A teenager";
    }
    else if (age < 60)
    {
        cout << "An Adult";
    }
    else
    {
        cout << "Senior citizen";
    }
}