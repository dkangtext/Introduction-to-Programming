#include <bits/stdc++.h>
using namespace std;
bool ChuSoChan(int n)
{
    while(n>0)
    {
        int t=n%10;
        n/=10;
        if(t%2==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(ChuSoChan(n))
    {
        cout << "toan chan";
    }
    return 0;
}