#include<bits/stdc++.h>
using namespace std;
void increment(int n, int &a){
    n++;
    a++;
}
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5;
    int b = 7;
    cout << a << " " << b << endl; 
    increment(a,b);
    cout << a << " " << b << endl;
    int c = 5;
    int d = 7;
    cout << c << " " << d << endl;
    swap(c, d);
    cout << c << " " << d << endl;
}