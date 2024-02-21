#include <iostream>

using namespace std;

#define MAXN 100

struct PhanSo
{
    int Tu;
    int Mau;
};

int UocChungLonNhat(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

void RutGon(PhanSo& ps)
{
    int c = UocChungLonNhat(ps.Tu, ps.Mau);
    ps.Tu = ps.Tu / c;
    ps.Mau = ps.Mau / c;
}

void Nhap(PhanSo a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].Tu >> a[i].Mau;
        cout << endl;
    }
}

void Xuat(PhanSo a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].Tu == 0 && a[i].Mau == 0)
            cout << "Khong thoa yeu cau bai toan" << endl;
        else
        {
            if (a[i].Tu == 0)
                cout << 0 << endl;
            else
            {
                if (a[i].Mau == 0)
                    cout << "Khong thoa yeu cau bai toan" << endl;
                else
                {
                    if (a[i].Tu % a[i].Mau == 0)
                        cout << a[i].Tu / a[i].Mau << endl;
                    else
                    {
                        RutGon(a[i]);
                        if ((a[i].Tu < 0 && a[i].Mau < 0) || (a[i].Tu > 0 && a[i].Mau > 0))
                            cout << abs(a[i].Tu) << "/" << abs(a[i].Mau) << endl;
                        else
                            cout << "-" << abs(a[i].Tu) << "/" << abs(a[i].Mau) << endl;
                    }
                }
            }
        }
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}


