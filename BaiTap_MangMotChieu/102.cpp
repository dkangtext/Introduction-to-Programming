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

void amdau(int a[],int n)
{
    int s=0;
    int m;
    for (int i=0; i<n; i++)
    {
        if (a[i]<0)
        {
            s=a[i];
            m=1;
            break;
        }
        else m=-1;
    }
    if (m==1)
    {
        cout<< "Gia tri am dau tien co trong mang "<<s<<"\n";
    }
    else cout <<m;
}

int main ()
{
    int a[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    amdau(a,n);
    return 0;
}