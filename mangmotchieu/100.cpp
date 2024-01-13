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

void nguyentodau(int A[], int &n)
{
    int m=1;
    for (int i=0; i<n;i++)
    {
        if (A[i]<2)
        {
            m=-1;
            break;
        }
        if (A[i]==2)
        {
            cout << "So nguyen to dau tien co trong mang: "<< A[i];
            break;
        }
        if (A[i]>2)
        {
            for (int dem=2; dem<A[i]; dem++)
            {
                if( A[i] % dem ==0)
                {
                    m=-1;
                    break;
                }
            }
            if (m==1)
            {
                cout << "So nguyen to dau tien co trong mang: "<< A[i];
                break;
            }
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
    nguyentodau(A,n);
    return 0;
}