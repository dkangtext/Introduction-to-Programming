#include <bits/stdc++.h>
using namespace std;
int TimK(int n)
{
    int s=0;
    for(int i=1; i<=n; i++)
    {
        s+=i;
        if(s>=n)
        {
            cout << i-1;
            return 0;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    TimK(n);
    return 0;
}