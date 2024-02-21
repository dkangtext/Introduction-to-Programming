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

void lietkekhoang (int a[], int n, int x, int y)
{
    int m=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>x && a[i]<y)
        {  
            if (a[i]%2==0)
            {
                m=1;
                break;
            }
            else m=-1;
        }
        else m=-1;
    }
    if (m==1)
    {
        cout<< "Cac gia tri thuoc doan ["<<x<<";"<<y<<"]: ";
        for (int i=0; i<n; i++)
        {
            if (a[i]>=x && a[i]<=y)
            {
                if(a[i]%2==0)
                {
                cout << a[i]<<"; ";
                }
            }
        }
    }
    else cout <<m;
}

int main ()
{
    int a[100];
    int n;
    int x,y;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    nhapmang(a,n);
    cout<< "Nhap gia tri x: ";
    cin>>x;
    cout<< "Nhap gia tri y: ";
    cin>>y;
    lietkekhoang(a,n,x,y);
    return 0;
}