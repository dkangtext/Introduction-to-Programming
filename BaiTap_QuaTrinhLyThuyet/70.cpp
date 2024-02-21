#include <bits/stdc++.h>
using namespace std;
float S(int n)
{
    float s=0, m=0;
    for(int i=1; i<=n; i++)
    {
        m += i;
        s += pow(-1,i+1)*(1/m);
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    cout << S(n);
    return 0;
}