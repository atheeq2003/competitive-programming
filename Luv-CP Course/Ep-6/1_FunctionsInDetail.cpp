#include<bits/stdc++.h>
using namespace std;
void printhello(){
    cout << "Hello World!" << endl; 
}
int sum(int a, int b){
    int result = a + b;
    return result;
}
int digit_sum(int n){
    int digit_sum = 0;
    while(n){
        digit_sum = digit_sum + n % 10;
        n = n / 10;
    }
    return digit_sum;
}
int main(){
    printhello();
    cout << sum(5,5) << endl;
    int a, b;
    cin >> a >> b;
    cout << digit_sum(a) + digit_sum(b);
}