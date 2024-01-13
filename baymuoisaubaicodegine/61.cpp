#include <bits/stdc++.h>
using namespace std;
int GiamDan(int n)
{
    int t=n%10;
    while(n>0)
    {
        int m=n%10;
        n/=10;
        if(m<t)
        {
            return 0;
        }
        t=m;
    }
    cout << "Giam Dan";
    return 0;
}
int main()
{
    int n;
    cin>>n;
    GiamDan(n);
    return 0;
}