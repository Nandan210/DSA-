#include <iostream>
using namespace std;

int main() {
    int i;
    int n=9;
    bool isPrime = true;

    for(i=1; i*i<=n; i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout<<"Prime number";
    } else {
        cout<<"Not prime number";
    }
    return 0;
    
}