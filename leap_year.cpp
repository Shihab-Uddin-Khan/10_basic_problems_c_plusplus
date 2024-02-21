#include<iostream>
using namespace std;

int main(){
    int a;

   cout << "Enter the year :";
   cin >> a;

if (a%4==0 || a%100==0){
    cout << a << " is a leaper year";

   }
else{
    cout << a << " is not a leaper year";
   }
   return 0;
}
