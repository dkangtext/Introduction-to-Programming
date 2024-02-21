#include <bits/stdc++.h>
using namespace std;
float can(int n)
{
    float s = sqrt(2);
    for(int i = 2;i<=n;i++)
    {
        s= sqrt(2+s);
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