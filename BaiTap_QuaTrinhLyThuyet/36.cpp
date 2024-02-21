#include <bits/stdc++.h>
using namespace std;
float can(int n)
{
    int t = 1;
    float s = 1;
    for(int i = 2;i<=n;i++)
    {
        t *= i;
        s= sqrt(t+s);
    }
    cout << s;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    can(n);
    return 0;
}