#include <bits/stdc++.h>
using namespace std;
int TichChuSo(int n)
{
    int m=n%10;
    while(n > 0)
    {
        n /= 10;
        if(n%10 != 0)
        {
            m *= n%10;
        }
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    TichChuSo(n);
    return 0;
}