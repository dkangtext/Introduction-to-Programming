#include <iostream>
using namespace std;
long TinhTich(int n)
{
    int s = 1;
    for ( int i=1; i<=n ; i++)
    {
        s *= i;
    }
    return s; 
}
int main()
{
    int n;
    cin >> n;
    cout << TinhTich(n);
    return 0;
}