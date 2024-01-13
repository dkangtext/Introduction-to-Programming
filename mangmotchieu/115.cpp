#include <iostream>
using namespace std;

void nhapmang(float A[], int &n)
{
    for ( int i=0; i<n; i++ )
    {
        cout<< "Nhap phan tu thu "<<i<<" cua mang: ";
        cin>>A[i];
    }
}

void dautien(float a[],int n)
{
    int s;
    int m=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>2003)
        {
            s=a[i];
            m=1;
            break;
        }
    }
    if (m==1)
    {
        cout<<"Gia tri dau tien lon hon 2003 la: "<<s;
    }
    else cout<<m;
}

int main ()
{
    float a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    dautien(a,n);
    return 0;
}