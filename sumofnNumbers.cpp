#include <iostream>
using namespace std;

int main () {
    int i=1;
    int sum=0;
    int n=5;

    while(i<=n) {
        sum+=i;
        i++;
    }

    cout<<sum;

    return 0;
}