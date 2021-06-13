//231A-Team
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            result++;
        }
    }
    cout << result;
}