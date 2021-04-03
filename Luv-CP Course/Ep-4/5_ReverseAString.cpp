#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string strrev;
    for(int i = str.size() - 1; i >= 0; i--){
        strrev.push_back(str[i]);
    } 
    cout << strrev;
}