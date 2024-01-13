#include <iostream>

using namespace std;

const int MAX = 100;

void MatranChuyenvi(int m, int n, float Matran[MAX][MAX], float Chuyenvi[MAX][MAX])
{
    for (int i = 0; i < m; ++i)
        {
        for (int j = 0; j < n; ++j)
        {
            Chuyenvi[j][i] = Matran[i][j];
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    float Matran[MAX][MAX];

    float Chuyenvi[MAX][MAX];

    for (int i = 0; i < m; ++i)
        {
        for (int j = 0; j < n; ++j)
        {
            cin >> Matran[i][j];
        }
    }

    MatranChuyenvi(m, n, Matran, Chuyenvi);

    for (int i = 0; i < n; ++i)
        {
        for (int j = 0; j < m; ++j)
        {
            cout << Chuyenvi[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
