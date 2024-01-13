#include <bits/stdc++.h>
using namespace std;
int TongChuSo(int n)
{
    int m=n%10;
    while(n > 0)
    {
        n /= 10;
        m += n%10;
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    TongChuSo(n);
    return 0;
}