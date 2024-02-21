#include<iostream>
using namespace std;


void maximum(int x, int y,int z){
    if(x>y && x>z){
        cout << x << " is the maximum number.";
    }
    if(y>x && y>z){
        cout << y << " is the maximum number.";
    }
    else{
        cout << z << " is the maximum number.";
    }
}

int main(){
  int a,b,c;
  cout << "Enter the numbers:";
  cin >> a >> b >> c;
  maximum(a,b,c);


}