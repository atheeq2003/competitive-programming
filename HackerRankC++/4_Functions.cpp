#include<bits/stdc++.h>
using namespace std;
int grt(int n, int m, int x, int y){
    int greatest0 = max(n,m);
    int greatest1 = max(x,y);
    int grt0 = greatest0;
    int grt1 = greatest1;
    int result = max(grt0,grt1);
    return result;
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << grt(a,b,c,d) << endl;
}