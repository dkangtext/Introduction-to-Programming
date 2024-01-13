#include <iostream>
using namespace std;
float TinhTongThuong(float x,int n)
{
    float s = 0;
    long t = 0;
    float m = 1;
    for(int i=1; i <= n; i++)
    {
        m *= x;
        t += i;
        s += m/t;
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
    cout << TinhTongThuong(x,n);
    return 0;
}