#include <bits/stdc++.h>
using namespace std;
int SoDaoNguoc(int n)
{
    int m=0;
    while(n > 0)
    {
        m = m*10 + n%10;
        n /= 10;
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    SoDaoNguoc(n);
    return 0;
}