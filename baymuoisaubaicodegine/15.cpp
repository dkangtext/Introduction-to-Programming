#include <iostream>
using namespace std;
float TinhTongThuong(int n)
{
    float s = 0;
    long t = 0;
    for(int i=1; i <= n; i++)
    {
        t += i;
        s += 1.0/t;
    }
    return s;
}
int main()
{
    int n; 
    cin >> n;
    cout << TinhTongThuong(n);
    return 0;
}