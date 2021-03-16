/* 
Given rectangle of length l and b. Print area of a rectangle. 

Constraints:
1 <= l <= 10^9
1 <= b <= 10^9

Input format:
2 space seperated integer l and b

Output format:
Single number which is area of rectangle

Sample Input:
3 4

Sample Output:
12

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int l, b, result;
    cin >> l >> b;
    result = l * b;
    cout << result << endl; 
}