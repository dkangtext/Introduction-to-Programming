#include <iostream>
using namespace std;
float TinhTong(int n)
{
    float s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += 1.0/(2*i + 1);
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