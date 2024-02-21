#include <bits/stdc++.h>
using namespace std;
int ChuSoDauTien(int n)
{
    int m;
    while(n > 0)
    {
        m = n;
        n /= 10;
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    ChuSoDauTien(n);
    return 0;
}