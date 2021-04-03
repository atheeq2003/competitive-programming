#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "hello";
    string result = str1 + str2;
    if(str1 == str2){
        cout << "Equal" << endl;
    }else{
        cout << "Not Equal" << endl;
    }
    cout << result;
}