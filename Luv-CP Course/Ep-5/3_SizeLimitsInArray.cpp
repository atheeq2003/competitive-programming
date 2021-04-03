#include<bits/stdc++.h>
using namespace std;
const int n = 2e7;             // Global Declaration does not lead to segmentation fault
int a[n];                      // And also value cannot be changed because of const 
int main(){
    a[n-1] = 7;                // Declaring in main give seg fault
    cout << a[n-1];
}