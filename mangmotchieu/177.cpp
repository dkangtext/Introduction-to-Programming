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

void demnguyento(int A[], int &n)
{
    int m=1;
    int s=0;
    for (int i=0; i<n;i++)
    {
        if (A[i]==2)
        {
            s++;
        }
        if (A[i]>2)
        {
            for (int dem=2; dem<A[i]; dem++)
            {
                if( A[i] % dem ==0)
                {
                    m=0;
                    break;
                }
            }
            if (m==1)
            {
                s++;
            }
        }
    }
    cout<<"So luong phan tu nguyen to co trong mang: "<<s<<"\n";
}
int main()
{
    int A[100];
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    Nhap_mang(A,n);
    demnguyento(A,n);
    return 0;
}