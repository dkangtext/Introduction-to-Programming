#include <iostream>
using namespace std;

void nhapmang(int A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void timdoan(int a[],int n)
{
    int s;
    int m=0;
    int nhonhat=a[0];
    int lonnhat;
    for (int i=0; i<n; i++)
    {
        if (a[i]>lonnhat)
        {
            lonnhat=a[i];
        }
    }
     for (int dem=1; dem<n; dem++)
    {
        if (a[dem]<nhonhat)
        {
            nhonhat=a[dem];
        }
    }
    cout<<"Cac gia tri trong mang thuoc doan: ["<<nhonhat<<","<<lonnhat<<"]";
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    timdoan(a,n);
    return 0;
}