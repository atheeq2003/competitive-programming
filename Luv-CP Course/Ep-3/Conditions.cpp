// Conditions
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5;                 // True = 1 False = 0
    int b = 8;                 // ==, !=, <, >, <=, >= These are Relational operators
    cout << (a == b) << endl;  // To check whether two values are equal

    int c = 5;
    int d = 8;
    cout << (a != b) << endl;  // To check whether two values are not equal

    // && || To check multiple conditions

    int e = 7;
    int f = 9;
    int g = 6;
    cout << ((f > e) && (f > g)) << "\n";  /* Both must be true. Even if one is false the combine 
                                              result will be false. */
    int h = 11;
    int i = 9;
    int j = 6;
    cout << ((i > h) || (i > j));          /* Either one of them must be true. Even if one is true
                                              the combine result will be true. */
}