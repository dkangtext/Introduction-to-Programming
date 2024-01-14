#include <iomanip>
#include <iostream>
#include <stdio.h>

using namespace std;

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien& sv)
{
    cin >> sv.MASV;

    cin.ignore();
    cin.getline(sv.HoTen, sizeof(sv.HoTen));

    cin >> sv.NgaySinh;
    cin >> sv.GioiTinh;
    cin >> sv.DiemToan;
    cin >> sv.DiemLy;
    cin >> sv.DiemHoa;

    sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa) / 3;

}

void Xuat(SinhVien& sv)
{
    cout << sv.MASV << "\t";
    cout << sv.HoTen << "\t";
    cout << sv.NgaySinh << "\t";
    cout << sv.GioiTinh << "\t";
    cout << sv.DiemToan << "\t";
    cout << sv.DiemLy << "\t";
    cout << sv.DiemHoa << "\t";
    cout << setprecision(3) << sv.DTB;
}

int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
