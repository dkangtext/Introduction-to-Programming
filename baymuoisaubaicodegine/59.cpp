#include <bits/stdc++.h>
using namespace std;
int DoiXung(int n)
{
    int t,s=0,k=n;
    while(n>0)
    {
        t=n%10;
        s=s*10+t;
        n/=10;
    }
    if((k-s)==0)
    {
        cout << "Doi Xung";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    DoiXung(n);
    return 0;
}