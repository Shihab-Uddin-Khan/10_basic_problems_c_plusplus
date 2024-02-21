#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout << "What are your numbers: ";
    cin >> a >> b;
    cout << "\n" << a << " " << b; 
    temp = a;
    a = b;
    b = temp;
    cout << "\n" << a << " " << b; 
    return 0;
}
