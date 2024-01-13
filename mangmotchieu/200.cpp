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

void ktdoixung(int A[],int n)
{
    int m;
    for (int i=0; i<n/2;i++)
    {
        if(A[i]!=A[n-i-1])
        {
            m=0;
            break;
        }
        else
        {
            m=1;
        }
    }
    if (m==1)
    {
        cout <<"Day la mang doi xung";
    }
    else cout <<"Dang la mang khong doi xung";
}

int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";   
    cin>>n;
    Nhap_mang(A,n);
    ktdoixung(A,n);
    return 0;
}