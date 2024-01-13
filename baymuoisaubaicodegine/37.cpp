#include <bits/stdc++.h>
using namespace std;
float can(int n)
{
    if(n == 1)
    {
        cout << 0;
        return 0;
    }
    float s = sqrt(2);
    for(int i = 3;i<=n;i++)
    {
        s= pow(i+s,(float(1)/i));
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