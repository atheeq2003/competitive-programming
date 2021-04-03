#include<bits/stdc++.h>
using namespace std;
const int n = 1e7;             // Global Declaration does not lead to segmentation fault
int a[n];                      // And also value cannot be changed because of const 
int main(){
    a[0] = 2;                  // Declaring in main give seg fault
    cout << a[0];
}