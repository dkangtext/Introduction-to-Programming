#include <iostream>

struct PhanSo
{
    int Tu;
    int Mau;
};

void Nhap(PhanSo &a)
{
    std::cin >> a.Tu >> a.Mau;
}

PhanSo Nhap()
{
    PhanSo b;
    std::cin >> b.Tu >> b.Mau;
    return b;
}

int SoSanh(PhanSo a, PhanSo b)
{
    double KQ1 = (float)a.Tu / a.Mau;
    double KQ2 = (float)b.Tu / b.Mau;
    if (KQ1 > KQ2) return 1;
    if (KQ1 == KQ2) return 0;
    if (KQ1 < KQ2) return -1;
}

int main()
{
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int KQ = SoSanh(a, b);
    if (KQ == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (KQ > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
