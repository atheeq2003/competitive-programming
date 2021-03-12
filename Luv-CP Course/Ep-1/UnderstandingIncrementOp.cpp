// Increment Operator
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 5; 
    a = a + 1;           // 5 = 5 + 1 = 6
    cout << a << endl;   // Printing a gives 6
    cout << a++ << endl; // Printing a++ give 6. It does not increment to 7, cause a++ uses variable"a"  
    cout << a << endl;   // first and then increments it.
    cout << ++a << endl; // In 9th line printing a give 7 as it was incremented
}                        // In 10th line a is preincremented so it prints 8 first.