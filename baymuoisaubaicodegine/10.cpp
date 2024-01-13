#include <iostream>
using namespace std;
float TinhLuyThua(float x, int n)
{
    float s = 1;
    for (int i=1; i<= n; i++)
    {
        s *= x;
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
    cout << TinhLuyThua(x,n);
    return 0;
}