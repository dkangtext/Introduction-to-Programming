#include <iostream>
#include <iomanip>
#include <math.h>
#define MAX 100

using namespace std;

struct DATHUC
{
    int n;
    float heso[MAX];
    int mu[MAX];
};

DATHUC* Nhap()
{
    DATHUC* x = new DATHUC;
    cin >> x->n;
    for (int i = 0; i< x->n; ++i)
    {
        cin >> x->heso[i];
        cin >> x->mu[i];
    }
    return x;
}

void Xuat(DATHUC& z)
{
    bool check = false;
    for (int i = 0; i < z.n; i++)
    {
        if (z.heso[i] == 0)
            continue;
        if (check == true)
        {
            if (z.heso[i] > 0)
                cout << "+";
        }
        if (z.mu[i] == 0)
        {
            if (z.heso[i] == 1)
            {
                cout << "1";
            }
            else if (z.heso[i] == -1)
            {
                cout << "-1";
            }
            else
                cout << z.heso[i];
            check = true;
        }
        if (z.mu[i] == 1)
        {
            if (z.heso[i] == 1 || z.heso[i] == -1)
            {
                if (z.heso[i] == 1)
                    cout << "x";
                if (z.heso[i] == -1)
                    cout << "-x";
            }
            else
                cout << z.heso[i] << "x";
            check = true;
        }
        if (z.mu[i] != 0 && z.mu[i] != 1)
        {
            if (z.heso[i] == 1 || z.heso[i] == -1)
            {
                if (z.heso[i] == 1)
                    cout << "x^" << z.mu[i];
                if (z.heso[i] == -1)
                    cout << "-x^" << z.mu[i];
            }
            else
            {
                cout << z.heso[i] << "x^" << z.mu[i];
            }
            check = true;
        }
    }
    if (check == false)
        cout << 0;
}

double TinhDaThuc(DATHUC B, double x)
{
    double kq = 0;
    for (int i = 0; i < B.n; i++)
    {
        kq += B.heso[i] * pow(x, B.mu[i]);
    }
    return kq;
}

int main()
{
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
