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

void kttoanchan(int A[], int &n)
{
    int m=0;
    int s=0;
    for (int i=0; i<n;i++)
    {
        if (A[i]%2==0)
        {
            m=1;
        }
        else 
        {
            m=0;
            break;
        }
    }
    cout<<m<<"\n";
}
int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    kttoanchan(A,n);
    return 0;
}