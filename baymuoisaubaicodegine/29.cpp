#include <iostream>
using namespace std;
int UocSoLeLonNhat(int n)
{
    int s = 1;
    for( int i=1; i < n; i++)
    {
        if(n%i ==0 && i>s && i%2!=0)
        {
            s = i;
        }
    }
    cout << s;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    UocSoLeLonNhat(n);
    return 0;
}