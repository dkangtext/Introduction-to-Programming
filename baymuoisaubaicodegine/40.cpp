#include<bits/stdc++.h>
using namespace std;
float can(float x, int n)
{
    float s = 0, t = 1;
    for(int i = 1; i <= n; i++)
    {
        t *= x;
        s = sqrt(t + s);
    }
    cout << s;
    return 0;
}
int main()
{
    float x;
    int n; 
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;
    can(x,n);
    return 0;
}