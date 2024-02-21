#include<iostream>
using namespace std;
float TinhTong(float x, int n)
{
    float s = 0, t = 1, m = 1;
    for( int i=1 ; i <= n; i++)
    {
        t *= x;
        m *= i;
        s += t/m;
    }
    return s;
}
int main()
{
    float x;
    int n;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;
    cout << TinhTong(x,n);
    return 0;
}