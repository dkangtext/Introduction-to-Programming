#include <iostream>
using namespace std;

void Nhap_mang(int A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void kttang(int A[], int &n)
{
    int s=A[0];
    int m=1;
    for (int i=1; i<n;i++)
    {
        if (A[i]>s)
        {
            s=A[i];
            m=1;
        }
        else 
        {
           m=0; 
        }
    }
    if (m==0)
    {
        cout<<"Day khong phai la mang tang dan";
    }
    else cout<<"Day la mang tang dan";
}

int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    kttang(A,n);
    return 0;
}