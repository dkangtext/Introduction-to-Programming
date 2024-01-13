#include <iostream>
using namespace std;
float TinhTong(float x, int n)
{
    float s=1, m=1, t=1 ;
    for(int i=1; i <= 2*n; i++)
    {
        m *= i;
        if(i%2 == 0)
        {
            t *= x*x;
            s += t/m;
        }
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