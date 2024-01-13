#include <iostream>
using namespace std;
float TinhTong(float x,int n)
{
    float s = x;
    float t = x;
    for( int i=1 ; i <= n; i++)
    {
        t *= x*x;
        s += t;
    }
    return s;
}
int main()
{
    int n;
    float x;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;
    cout << TinhTong(x,n);
    return 0;
}