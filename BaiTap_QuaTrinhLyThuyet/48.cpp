#include <bits/stdc++.h>
using namespace std;
int TichChuSoLe(int n)
{
    int m=1;
    while(n > 0)
    {
        
        if((n%10)%2 != 0)
        {
            m *= n%10;
        }
        n /= 10;
    }
    cout << m;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    TichChuSoLe(n);
    return 0;
}