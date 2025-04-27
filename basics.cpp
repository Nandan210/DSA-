#include <iostream>
using namespace std;

int main() {
    int a;
    float b;

    cout<<"Enter a : ";
    cin>> a;
    cout<<"Enter b : ";
    cin>> b;

    cout<<"Sum = "<< (a+b)<<endl;
    cout<<"Difference = "<< (a-b)<<endl;
    cout<<"Product = "<< (a*b)<<endl;
    cout<<"Division = "<< (a/b)<<endl;
    cout<<"Remainder = "<< (a%(int)b)<<endl;

    return 0;
}