#include <bits/stdc++.h>
using namespace std;
float can(int n)
{
    float s = 0;
    for(int i = 1;i<=n;i++)
    {
        s = pow(i+s,(float(1)/(i+1)));
    }
    cout << s;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    can(n);
    return 0;
}