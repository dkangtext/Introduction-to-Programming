#include <iostream>

using namespace std;

#define MAXN 100

struct PhanSo
{
    int Tu, Mau;
};

void Nhap(PhanSo& a)
{
    cin >> a.Tu >> a.Mau;
}

PhanSo Nhap()
{
    PhanSo b;
    cin >> b.Tu >> b.Mau;
    return b;
}

PhanSo Chia(PhanSo& a, PhanSo& b)
{
    PhanSo c;
    c.Tu = a.Tu * b.Mau;
    c.Mau = a.Mau * b.Tu;
    return c;

}

int UocChungLonNhat(int m, int n)
{
    if (n == 0) return  m;
    return UocChungLonNhat(n, m % n);

}

void RutGon(PhanSo& c)
{
    int ucln = UocChungLonNhat(c.Tu, c.Mau);
    c.Tu /= ucln;
    c.Mau /= ucln;

}

void Xuat(PhanSo c)
{
    RutGon(c);
    if (c.Tu == 0)
        {
            cout << "0";
        }
    else
        if (c.Mau < 0)
        {
            cout << -c.Tu << "/" << -c.Mau;
        }
    else
        if (c.Mau < 0 && c.Tu < 0)
        {
            cout << -c.Tu << "/" << -c.Mau;
        }
    else
        if (c.Mau == c.Tu || c.Mau == 1)
        {
            cout << c.Tu;
        }

    else
        {
            cout << c.Tu << "/" << c.Mau;
        }
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
