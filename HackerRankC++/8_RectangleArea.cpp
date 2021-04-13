#include <bits/stdc++.h>
using namespace std;
class RectangleArea
{
public:
    int RectArea(int a, int b)
    {
        return a * b;
    }
};
    int main()
    {
        int n, m;
        cin >> n >> m;
        RectangleArea RectangleAreaObject;
        cout << RectangleAreaObject.RectArea(n, m);
    }

