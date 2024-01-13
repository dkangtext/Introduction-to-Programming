#include <iostream>
using namespace std;
long TinhTongTich(int n)
{
    long s = 0;
    long t = 1;
    for ( int i=1; i <= n; i++)
    {
        t *= i;
        s += t;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    cout << TinhTongTich(n);
    return 0;
}