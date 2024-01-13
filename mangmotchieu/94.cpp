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

void vitrichandau(int a[],int n)
{
    int m;
    int dem;
    for (int i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            dem=i;
            m=1;
            break;
        }
        else m=-1;
    }
    if (m==1)
    {
        cout<< "Vi tri gia tri chan dau tien co trong mang la vi tri: "<<dem<<"\n";
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
    vitrichandau(a,n);
    return 0;
}