#include<iostream>
using namespace std;

int factorial(int x) {
    int i,fact = 1;
     for(i=1;i<=x;i++){
        fact = fact * i;
     }
     return fact;
//      cout << "the factorial of " << x << ": " << fact;
}

int main() {
    int a;
    cout << "What are your numbers: ";
    cin >> a;
    int fact = factorial(a);
    cout << "the factorial of " << fact;
    

    return 0;
}