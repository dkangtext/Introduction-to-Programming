#include <iostream>
using namespace std;

void Nhap_mang(double A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void Xuat_mang(double A[], int &n)
{
    for (int i=0; i<n;i++)
    {
    cout<< "Phan tu thu "<<i<< " cua mang la: "<<A[i]<<"\n";
    }
}

int main()
{
    double A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    Xuat_mang(A,n);
    return 0;
}