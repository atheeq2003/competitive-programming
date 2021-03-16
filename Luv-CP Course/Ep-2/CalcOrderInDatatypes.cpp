// Calculation Order in Datatypes
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << 7 / 2 << endl;   /* The answer for 7/2 is 3.5 but it prints 3 because 7 and both are in 
                                int form */ 
    cout << 7 / 2.0 << endl; /* Here it prints 3.5 beacuse we insert .0 after 2. In this statement
                                the compiler decides to use float datatype as it has higher precedence 
                                than int datatype. */
    cout << 'c' + 1 << endl; /* The ASCII value of c is 99, + 1 gives 100. This is because the 
                                precedence of char is lower than int. So it decides to use the int 
                                datatype. */
    int a = 3/2;
    cout << a << endl;       /* The answer for 3/2 is 1.5 but it prints 1. C++ calculates 1.5 but 
                                when storing it stores 1 in a. Because a is an integer variable. */
    int b = 3/2.0;
    cout << b << endl;       /* Here even after entering 2.0 it still prints 1.C++ calculates 1.5 but 
                                when storing it stores 1 in a. Because b is an integer variable. */
    double c = 3/2;  
    cout << c << endl;       /* The answer for 3/2 is 1.5 but it prints 1. Double calculates 1.5 but 
                                when storing it stores 1 in c. Because double stores both int and
                                decimal 3/2 is in int form, so it gives answer in int form. */
    double d = 3/2.0;  
    cout << d << endl;       /* Here the answer is 1.5 because it is 3/2.0 */  
                                                        
}