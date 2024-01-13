#include <iostream>
using namespace std;
float TinhTong(int n)
{
    float s=0;
    for(int i = 1; i <= n; i++)
    {
        s += 1.0/i;
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