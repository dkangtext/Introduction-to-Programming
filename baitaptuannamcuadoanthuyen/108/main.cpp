#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#define MAXN 100

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(char s[])
{
    cin.getline(s, 100);
}

void Nhap(SinhVien sv[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i].MASV;

        cin.ignore();
        cin.getline(sv[i].HoTen, sizeof(sv[i].HoTen));

        cin >> sv[i].NgaySinh;
        cin >> sv[i].GioiTinh;
        cin >> sv[i].DiemToan;
        cin >> sv[i].DiemLy;
        cin >> sv[i].DiemHoa;

        sv[i].DTB = (sv[i].DiemToan + sv[i].DiemLy + sv[i].DiemHoa) / 3;
    }
}

void Xuat(SinhVien sv[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        cout << sv[i].MASV << "\t";
        cout << sv[i].HoTen << "\t";
        cout << sv[i].NgaySinh << "\t";
        cout << sv[i].GioiTinh << "\t";
        cout << sv[i].DiemToan << "\t";
        cout << sv[i].DiemLy << "\t";
        cout << sv[i].DiemHoa << "\t";
        cout << setprecision(3) << sv[i].DTB;
        cout << endl;
    }
}

void XoaTheoHoTen(SinhVien sv[], int& n, char s[])
{
	for (int i = 0; i < n; i++)
	{
        int deleted_index = -1;
		if (strcmp(s, sv[i].HoTen) == 0)
		{
			deleted_index = i;
            for (int i = deleted_index; i < n - 1; i++)
            {
                sv[i] = sv[i + 1];
            }
            n--;
            i--;
		}
	}
}

int main()
{
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}

