#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    int min=-1;

    //if(a<b){
    //     if(a<c){
    //          min=a;
    //     }
    //     else{
    //         min=c;
    //     }
    // }
    // else{
    //     if (b<c)
    //     {
    //         min=b;
    //     }
    //     else{
    //         min=c;
    //     }     
    // }

    //Using ternary operator
    min=(a<b && a<c) ? a : (b<c ? b : c);

    cout<<min<<" is minimum";
    return 0;
}