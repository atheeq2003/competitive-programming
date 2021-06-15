// 236A Boy Or Girl
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    string str;
    cin >> str;
    set<char> s;
    for (auto x : str)
    {
        s.insert(x);
    }
    if (s.size() % 2)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}