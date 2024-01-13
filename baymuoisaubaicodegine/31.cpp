#include <iostream>
using namespace std;
int ktnt(int n)
{
    if(n<=1)
    {
        cout<<n<<" khong phai so nguyen to";
        return 0;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout <<n<<" khong phai so nguyen to";
            return 0;
        }
    }
    cout<<n<<" la so nguyen to";
    return 0;
}
int main()
{
    int n;
    cin >> n;
    ktnt(n);
    return 0;
}