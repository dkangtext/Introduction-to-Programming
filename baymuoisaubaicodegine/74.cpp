#include <bits/stdc++.h>
using namespace std;
float S(float x, int n)
{
    float s=1;
    int d=1, m=1;
    for(int i=1; i<=(2*n+1); i++)
    {
        m*=i;
        if(i%2 != 0)
        {  
            d*=-1;
            s+= d*(pow(x,i)/m);
        }
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