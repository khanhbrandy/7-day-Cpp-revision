// Bai 1: 
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Nhap ngay thang dang My: ";
    getline(cin, str);
    cout << "Ngay thang dang VN: " << str[3]<<str[4]<< "/" 
    << str[0]<<str[1]<< "/" << str[6]<<str[7];
    return 0;
}

// Bai 2: 
#include <iostream>

using namespace std;

int main()
{
    string str;
    int dem =0;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    for (int i=0; i < str.length(); i++) {
        if (str[i] == 'a') {
            dem ++;
        }
    }
    
    cout << "So ky tu a la: " << dem << endl;
    return 0;
}

// Bai 3:
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    for (int i=0; i < str.length()-1; i++) {
        if (str[i] == 'a') {
            str.replace(i,1,"",1);
        }
    }
    
    cout << "Chuoi moi la: " << str << endl;
    return 0;
}

//Bai 6:
#include <iostream>
using namespace std;
#define     SO_LUONG    3

int main()
{
    string str, revStr;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    // ghep chuoi nguoc
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    cout << "Chuoi nguoc = " << revStr << endl;
    return 0;
}

// Bai 7: 
#include <iostream>
using namespace std;
#define     SO_LUONG    3

int main()
{
    string str, revStr;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    // ghep chuoi nguoc
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    cout << "Chuoi nguoc = " << revStr << endl;
    return 0;
}

// Bai 8
#include <iostream>
#include "string"
using namespace std;
int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    bool isDinhDangSoNguyen = true;
    if (str.length() == 0) {
        isDinhDangSoNguyen = false;
    }
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            isDinhDangSoNguyen = false;
            break;
        }
    }
    if (isDinhDangSoNguyen) {
        cout << "Chuoi dinh dang so nguyen\n";
    }
    else {
        cout << "Chuoi khong phai dinh dang so nguyen\n";
    }

    // Bai 9
    #include <iostream>
    #include "string"
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    int demChuHoa = 0, demChuThuong = 0, demSo = 0;
    for (int i = 0; i < str.length(); i++) {
       if (str[i] >= 'a' && str[i] <= 'z') {
           demChuThuong++;
       }
       else if (str[i] >= 'A' && str[i] <= 'Z') {
           demChuHoa++;
       }
       else if (str[i] >= '0' && str[i] <= '9') {
           demSo++;
       }
    }
    cout << "Co " << demChuHoa << " chu hoa.\n"
       << "Co " << demChuThuong << " chu thuong.\n"
       << "Co " << demSo << " ky tu so.\n";

    // Bai 10
    #include <iostream>
    #include "string"
    string str;
    string str1 = "Hello world";
    string str2 = "";
    // lay do dai chuoi
    int doDai = str1.length();
    // so sanh 2 chuoi
    bool isCmp = str1 == str2;
    // gan chuoi
    str2 = str1;
    str2 = str1 + "abc";    // "Hello worldabc"
    str2 = "abc" + str1;    // "abcHello world"
    // hien thi chuoi
    cout << str << endl;
    // nhap chuoi
    cout << "Nhap chuoi: ";
    int x;
    cin >> x;
    cout << "Chuoi vua nhap: " << x << endl;