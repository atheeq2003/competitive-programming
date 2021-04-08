#include<bits/stdc++.h>
using namespace std;
void sum_sub(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}
int main(){
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a >> b;
    sum_sub(pa, pb);
    cout << a << "\n" << b;
}