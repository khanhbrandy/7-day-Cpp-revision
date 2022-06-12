
#include <iostream>
#include "string"
#include "iomanip"
using namespace std;

struct ThiSinh
{
    string soBaoDanh;
    string hoTen;
    int namSinh;
    float diemToan;
    float diemLy;
    float diemHoa;
};

ThiSinh nhapMotThiSinh(void)
{
    ThiSinh ts;
    cout << "\tSo bao danh: ";
    getline(cin, ts.soBaoDanh);
    cout << "\tHo ten: ";
    getline(cin, ts.hoTen);
    cout << "\tNam sinh: ";
    cin >> ts.namSinh;
    cout << "\tDiem toan: ";
    cin >> ts.diemToan;
    cout << "\tDiem ly: ";
    cin >> ts.diemLy;
    cout << "\tDiem hoa: ";
    cin >> ts.diemHoa;
    return ts;
}

void nhapThiSinh(ThiSinh ts[], int &sl)
{
    int N;
    cout << "Nhap so luong thi sinh: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        // nhap thong tin 1 thi sinh
        cin.ignore();
        cout << "Nhap thong tin thi sinh thu " << i + 1 << endl;
        ts[i] = nhapMotThiSinh();
    }
    sl += N;
}

// hien thi thong tin 1 thi sinh
void hienThiMotThiSinh(ThiSinh t)
{
    cout << setw(10) << t.soBaoDanh
        << setw(20) << t.hoTen
        << setw(10) << t.namSinh
        << setw(10) << t.diemToan
        << setw(10) << t.diemLy
        << setw(10) << t.diemHoa
        << endl;
}

// hien thi thong tin toan bo thi sinh
void hienThi(ThiSinh arr[], int soLuong)
{
    cout << "\nHien thi du lieu mang thi sinh\n";
    for (int i = 0; i < soLuong; i++) {
        hienThiMotThiSinh(arr[i]);
    }
}

void khoiTao(ThiSinh arr[], int& sl)
{
    arr[0].soBaoDanh = "CF100";
    arr[0].hoTen = "Nguyen Van Nam";
    arr[0].namSinh = 2000;
    arr[0].diemToan = 1;
    arr[0].diemLy = 10;
    arr[0].diemHoa = 10;

    arr[1].soBaoDanh = "CF101";
    arr[1].hoTen = "Nguyen Van";
    arr[1].namSinh = 2001;
    arr[1].diemToan = 9;
    arr[1].diemLy = 10;
    arr[1].diemHoa = 10;

    arr[2].soBaoDanh = "CF102";
    arr[2].hoTen = "Nguyen Nam";
    arr[2].namSinh = 2001;
    arr[2].diemToan = 6;
    arr[2].diemLy = 9;
    arr[2].diemHoa = 4;

    arr[3].soBaoDanh = "CF103";
    arr[3].hoTen = "Pham Van";
    arr[3].namSinh = 2000;
    arr[3].diemToan = 5;
    arr[3].diemLy = 8;
    arr[3].diemHoa = 10;

    arr[4].soBaoDanh = "CF104";
    arr[4].hoTen = "Nguyen Van Anh";
    arr[4].namSinh = 2000;
    arr[4].diemToan = 6;
    arr[4].diemLy = 8;
    arr[4].diemHoa = 7;

    sl = 5;
}

bool isDinhDangSoNguyenDuong(string str)
{
    for (int i = 0; i < str.length(); i++) {
        if (str[i] > '9' || str[i] < '0') {
            return false;
        }
    }
    return true;
}

string chuyenDoiHeDemCoSo2(int N)
{
    string str = "";
    do {
        int du = N % 2;
        N /= 2;
        str = to_string(du) + str;
    } while (N > 0);
    return str;
}

void hthi(void)
{
    static int a = 1;
    a++;
    cout << "a = " << a << endl;
}

int tinhTong(int a, int b, int c = 0)
{
    int tong = 0;
    tong = a + b + c;
    return tong;
}

unsigned long long tinhGiaiThua(int N)
{
    if (N == 1) {
        return 1;
    }
    else {
        return N * tinhGiaiThua(N - 1);
    }
}

int main()
{
    cout << tinhGiaiThua(10) << endl;


    /*string str;
    cout << "Nhap chuoi bat ky: ";
    getline(cin, str);
    if (isDinhDangSoNguyenDuong(str)) {
        int N = stoi(str);
        cout << "Dinh dang so nguyen. Hex = "
            << setbase(16) << N << endl
            << chuyenDoiHeDemCoSo2(N)
            << endl;
    }*/

    ThiSinh mang[100];
    int soLuong = 0;
    khoiTao(mang, soLuong);

    nhapThiSinh(mang, soLuong);
    hienThi(mang, soLuong);
}

