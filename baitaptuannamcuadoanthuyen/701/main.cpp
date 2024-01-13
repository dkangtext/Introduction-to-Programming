#include<bits/stdc++.h>

using namespace std;

int main()
{
    float a[50][50];
    int i,j,m,n;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
