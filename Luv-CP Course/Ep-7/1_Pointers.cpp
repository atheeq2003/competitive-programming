#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 4;
    int *p_x = &x;
    cout << "Adr of x: " << &x << endl;
    cout << "Val of p_x: " << p_x << endl;
    cout << "Val od *p_x: " << *p_x << endl;
    *p_x = 5;
    cout << x << endl;
    cout << "p_x + 1" << p_x + 1 << endl;
}