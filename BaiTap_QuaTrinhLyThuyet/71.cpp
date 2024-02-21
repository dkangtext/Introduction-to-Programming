#include <bits/stdc++.h>
using namespace std;
float S(float x, int n)
{
    float s=0, m=0;
    for(int i=1; i<=n; i++)
    {
        m+=i;
        s+= pow(-1,i)*(pow(x,i)/m);
    }
    return s;
}
int main()
{
    float x;
    int n;
    cout << "Nhap x=";
    cin >> x;
    cout << "Nhap n=";
    cin >> n;
    cout << S(x,n);
    return 0;
}