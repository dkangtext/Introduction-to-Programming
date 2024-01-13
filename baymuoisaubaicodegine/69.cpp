#include <bits/stdc++.h>
using namespace std;
float S(float x, int n)
{
    float s=x,m=x;
    for(int i=0; i<n; i++)
    {
        m*=-(x*x);
        s+=m;
    }
    return s;
}
int main()
{
    float x;
    int n;
    cout << "Nhap x=";
    cin >> x;
    cout << "Nhap n=";
    cin >> n;
    cout << S(x,n);
    return 0;
}