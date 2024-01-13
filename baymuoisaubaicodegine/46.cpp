#include <bits/stdc++.h>
using namespace std;
int DemLe(int n)
{
    int m=0;
    while(n > 0)
    {
        
        if((n%10)%2 != 0)
        {
            m++;
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
    DemLe(n);
    return 0;
}