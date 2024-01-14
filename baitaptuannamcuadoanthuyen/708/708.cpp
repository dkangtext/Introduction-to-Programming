#include <iostream>
using namespace std;
int main()
{
    double arr[100][100];
    long n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int dem = 0;
    int check1 = 1;
    int check2 = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                check1 = check1 * arr[i][j];
            }
            else if (i < j)
            {
                check2 = check2 + arr[i][j];
                cnt = cnt + arr[j][i];
            }
        }
        if (cnt != 0)
        {
            dem = dem + 1;
        }
    }
    if (dem > 1 || check1 != 1 || check2 != 0)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}