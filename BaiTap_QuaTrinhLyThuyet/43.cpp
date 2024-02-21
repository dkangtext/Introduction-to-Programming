#include <bits/stdc++.h>
using namespace std;
int Dem(int n)
{
    int m=0;
    while(n > 0)
    {
        n /= 10;
        m++;
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    Dem(n);
    return 0;
}