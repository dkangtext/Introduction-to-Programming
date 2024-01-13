#include <bits/stdc++.h>
using namespace std;
bool ChuSoLe(int n)
{
    while(n>0)
    {
        int t=n%10;
        n/=10;
        if(t%2==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(ChuSoLe(n))
    {
        cout << "toan le";
    }
    return 0;
}