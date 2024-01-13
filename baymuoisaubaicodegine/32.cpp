#include <iostream>
using namespace std;
int ktcp(int n)
{
    float s;
    for(int i=1; i<=(n/2); i++)
    {
        s = float(n)/i;
        if(s == i)
        {
            cout << n << " la so chinh phuong";
            return 0;
        }
    }
    cout << n << " khong phai la so chinh phuong";
    return 0; 
}
int main()
{
    int n;
    cin >> n;
    ktcp(n);
    return 0;
}