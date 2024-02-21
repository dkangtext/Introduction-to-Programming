#include <iostream>
using namespace std;
float TinhTong(int n)
{
    float s;
    for(int i = 0; i<= n; i++)
    {
        s += float(2*i + 1)/(2*i+2);
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