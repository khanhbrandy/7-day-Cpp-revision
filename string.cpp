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
