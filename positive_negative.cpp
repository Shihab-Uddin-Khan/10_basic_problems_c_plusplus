#include<iostream>
using namespace std;

void maximum(int x) {
    if (x>0) {
        cout << x << " is the positive number";
    }
    else if(x<0) {
        cout << x << " is the negative number";
    }
    else{
        cout << x << " is the zero number";
    }
}

int main() {
    int a;
    cout << "What are your numbers: ";
    cin >> a;
    maximum(a);

    return 0;
}