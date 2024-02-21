#include<iostream>
using namespace std;

void maximum(int x) {
    if (x%2==0) {
        cout << x << " is the even number";
    }
    else {
        cout << x << " is the odd number";
    }
}

int main() {
    int a;
    cout << "What are your numbers: ";
    cin >> a;
    maximum(a);

    return 0;
}