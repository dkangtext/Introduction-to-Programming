#include <iostream>
using namespace std;
int TongUocSoChan(int n)
{
    int s = 0;
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            if(i%2 == 0)
            {
                s += i;
            }
        }
    }
    cout << s;
}
int main()
{
    int n; 
    cin >> n;
    TongUocSoChan(n);
    return 0;
}