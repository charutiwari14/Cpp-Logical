// Simple grading system: if marks ≥ 90 → "A", ≥ 75 → "B", ≥ 50 → "C", else → "Fail".

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks:";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Your grade is 'A'";
    }
    else if (marks>=75)
    {
        cout << "Your grade is 'B'";
        
    }
    else if (marks>=50)
    {
        cout << "Your grade is 'C'";
        
    }
    else
    {
        cout<<"Fail";
    }
    
}
