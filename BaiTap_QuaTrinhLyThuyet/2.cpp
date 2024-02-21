#include <iostream>
using namespace std;
long TinhTong(int n)
{
    int s = 0;
    for(int i=1; i <= n; i++)
    {
        s += i*i;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    cout << TinhTong(n);
    return 0;
}