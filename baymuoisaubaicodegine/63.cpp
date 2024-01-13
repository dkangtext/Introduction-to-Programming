#include <bits/stdc++.h>
using namespace std;
int BCNN(int a, int b)
{
    int k;
    if(a<b)
    {
        swap(a,b);
    }
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            k = i;
        } 
    }
    if(((a*b)%k)!=0)
    {
        cout << (a*b)/k;
        return 0;
    }
    return 0;
}
int main()
{
    int a,b;
    cin >> a >> b;
    BCNN(a,b);
    return 0;
}