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

void dautientrongdoan(int a[],int n,int x, int y)
{
    int s;
    int m=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>=x && a[i]<=y)
        {
            s=a[i];
            m=1;
            break;
        }
    }
    if (m==1)
    {
        cout<<"Gia tri dau tien nam trong doan la: "<<s;
    }
    else cout<<x;
}

int main ()
{
    int a[100];
    int n;
    int x,y;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    cout<<"Nhap gia tri x: ";
    cin>>x;
    cout<<"Nhap gia tri y: ";
    cin>>y;
    dautientrongdoan(a,n,x,y);
    return 0;
}