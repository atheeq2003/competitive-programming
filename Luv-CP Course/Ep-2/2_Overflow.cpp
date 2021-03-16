// Overflow
#include<bits/stdc++.h>
using namespace std;
int main(){
  /* int, char, long int, long long int, float, double
    Ranges:
     -10^9 < int < 10^9
     -10^12 < long int < 10^12
     -10^18 < long long int < 10^18 */
    
    int a = 100000;
    int b = 100000;
    int c = a * b;             // The answer should be 10000000000.
    cout << c << endl;         // Wrong answer because int's range is less.
    
    long int d = 100000;
    long int e = 100000;
    long int f = d * e;        // The answer should be 10000000000.
    cout << f << endl;         /* The answer is correct here because long int's range is greater than
                                  int */
    int g = 100000;
    int h = 100000;
    long int i = g * 1LL * h;  // The answer is wrong. Because a and b is stored in int form
    cout << i << endl;         // Inserting 1LL prints the answer in long long int 
}