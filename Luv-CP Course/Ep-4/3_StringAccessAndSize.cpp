#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    cout << str[1] << endl;
    string str1 = "Hello";
    str1[0] = 'G';
    cout << str1 << endl;
    cout << str.size() << endl;
    for(int i = 0; i < str.size(); i++){
        cout << str[i] << endl;
    }
}