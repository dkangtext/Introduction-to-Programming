#include <iostream>
using namespace std;
float TinhMu(float x,int n)
{
    float s = 0;
    float t = 1;
    for( int i=1 ; i<= n; i++)
    {
        t *= x;
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
    cout << TinhMu(x,n);
    return 0;
}