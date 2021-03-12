#include<bits/stdc++.h>
using namespace std;
int main(){
    // int,char,float,double
    char a = 'c';      // char stores a single character
    int b = 3;         // int can only store integer
    double c = 3.5;    // double stores decimal values
    b = 4.5;           // You cant store decimal points in int data type, so the output will be 4
    bool d = 10;       // bool is to check whether it is true or false, 1-true;0-false;
    cout << a << " " << b << " " << c << " " << d << endl;  // any number except 0 is true even if it
}                                                           // is in negative ex:-123 it will be true