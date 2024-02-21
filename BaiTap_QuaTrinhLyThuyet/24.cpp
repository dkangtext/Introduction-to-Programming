#include <iostream>
using namespace std;
void LietKeUocSoLe(int n)
{
    for( int i = 1; i<=n ; i++)
    {
        if( n % i == 0 )
        {
            if(i%2 != 0)
            {
                cout << i << " ";
            }
        }
    }
}
int main()
{
    int n; 
    cin >> n;
    LietKeUocSoLe(n);
    return 0;
}