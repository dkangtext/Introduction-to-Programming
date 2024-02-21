#include<iostream>
#include<math.h>
#define max 100

using namespace std;

struct DATHUC
{
    int n;
    float heso[max];
    int mu[max];
};

DATHUC* Nhap()
{
    DATHUC* x = new DATHUC;
    cin >> x->n;
    for (int i = 0; i < x->n; i++)
    {
        cin >> x->heso[i];
        cin >> x->mu[i];
    }
    return x;
}

void Xuat(DATHUC z)
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

DATHUC Tong2DaThuc(DATHUC* x, DATHUC* y)
{
    DATHUC* z;
    z = new DATHUC();
    int i1 = 0;
    int i2 = 0;
    int dem = 0;
    while (x->n != 0 || y->n != 0)
    {
        if (y->n == 0 || y->mu[i2] < x->mu[i1])
        {
            z->heso[dem] = x->heso[i1];
            z->mu[dem] = x->mu[i1];
            i1++;
            dem++;
            x->n--;
        }
        else
        {
            if (x->n == 0 || y->mu[i2] > x->mu[i1])
            {
                z->heso[dem] = y->heso[i2];
                z->mu[dem] = y->mu[i2];
                i2++;
                dem++;
                y->n--;
            }
            else
            {
                z->heso[dem] = x->heso[i1] + y->heso[i2];
                z->mu[dem] = x->mu[i1];
                i1++;
                i2++;
                dem++;
                x->n--;
                y->n--;
            }
        }
    z->n = dem;
   }
return *z;
}

int main()
{
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
