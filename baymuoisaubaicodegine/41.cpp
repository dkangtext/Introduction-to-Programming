#include <bits/stdc++.h>
using namespace std;
float PhanSo(int n)
{
    float s = 1/2;
    for(int i = 2; i <= n; i++)
    {
        s = 1.0/(1+s);
    }
    cout << s; 
    return 0;
}
int main()
{
    int n; 
    cin >> n;
    PhanSo(n);
    return 0;
}