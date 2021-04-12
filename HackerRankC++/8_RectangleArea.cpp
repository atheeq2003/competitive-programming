#include<bits/stdc++.h>
using namespace std;
class RectangleArea{
    public:
    int RectArea(int a, int b){
        int area;
        area = a * b;
        cout << area;
        return area; 
    }
};
int main(){
    int n, m;
    cin >> n >> m;
    RectangleArea RectangleAreaObject;
    RectangleAreaObject.RectArea(n, m);
}