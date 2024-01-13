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

void hoanthiendau(int A[], int &n)
{
    int s=0;;
    int m=-1;
    for (int i=0; i<n;i++)
    {
        if (A[i]==0)
        {
            continue;
        }
        for (int dem=1; dem<A[i]; dem++)
        {
            if( A[i] % dem == 0)
            {
                s+=dem;
            }
        }
        if (A[i]==s)
        {
            cout << "So hoan thien dau tien co trong mang: "<< A[i];
            m=1;
            break;
        }
    }
    if (m==-1)
    {
    cout<<m;
    }
}
int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    hoanthiendau(A,n);
    return 0;
}