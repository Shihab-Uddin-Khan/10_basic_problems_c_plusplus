#include<iostream>
using namespace std;

void maximun(int x, int y) {
    if (x > y) {
        cout << x << " is the maximum number";
    }
    else {
        cout << y << " is the maximum number";
    }
}

int main() {
    int a, b;
    cout << "What are your numbers: ";
    cin >> a >> b;
    maximun(a, b);

    return 0;
}

