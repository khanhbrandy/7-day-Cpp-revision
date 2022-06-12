// Bai 1

#include <iostream>
using namespace std;

int timUCLN(int a, int b) {
    int ucln;
    if ((a == 0) || (b==0)) {
        ucln = a+b;
    }
    while (a!=b) {
        if (a> b) {
            a -= b;
        } else {
            b-=a;
        }
    }
    ucln = a;
    return ucln;
}

int main()
{
    int a,b,c,d;
    cout<<"Nhap a: ";
    cin >> a;
    cout<<"Nhap b: ";
    cin >> b;
    cout<<"Nhap c: ";
    cin >> c;
    cout<<"Nhap d: ";
    cin >> d;
    cout << "UCLN cua 2 so la " << timUCLN(a,timUCLN(b,timUCLN(c,d))) << endl;
    return 0;
}

// Bai 2
#include <iostream>
using namespace std;

int timGiaiThua(int a) {
    unsigned long long giaithua=1;
    if (a==0) {
        return giaithua;
    }
    for (int i=1; i<= a; i++) {
        giaithua *= i;
    }
    return giaithua;
}

int main()
{
    int a,b,c,d;
    cout<<"Nhap a: ";
    cin >> a;
    cout << "Giai thua cua so " << a << " la: " << timGiaiThua(a) << endl;
    return 0;
}

// Bai 3:
#include <iostream>
using namespace std;

int timMu(float a, int n) {
    unsigned long long mu=1;
    if (n==0) {
        return mu;
    }
    for (int i=1; i<= n; i++) {
        mu *= a;
    }
    return mu;
}

int main()
{
    int a,n;
    cout<<"Nhap a: ";
    cin >> a;
    cout<<"Nhap n: ";
    cin >> n;
    
    cout << "Gia tri " << a << "^" << n <<" la: " << timMu(a,n) << endl;
    return 0;
}

// Bai 4:
#include <iostream>
using namespace std;

bool checkNamNhuan(int year) 
{ 
    // Nếu số năm chia hết cho 400,
    // đó là 1 năm nhuận
    if (year % 400 == 0) 
        return true; 
  
    // Nếu số năm chia hết cho 4 và không chia hết cho 100,
    // đó không là 1 năm nhuận
    if (year % 4 == 0 && year % 100 != 0) 
        return true;
 
    // trường hợp còn lại 
    // không phải năm nhuận
    return false; 
} 

int main()
{
    for (int i=1; i<= 3000; i++) {
        if (checkNamNhuan(i) == true) {
            cout << "Nam "<<i<< " la nam nhuan" << endl;
        } else {
            cout << "Nam "<<i<< " khong phai la nam nhuan"<< endl;
        }
    }
    return 0;
}

// Bai 5:
#include <iostream>
using namespace std;

int tinhTong(int n) 
{ 
    int tong=0;
    for (int i=1; i<=n; i++) {
        tong += i;
    }
    return tong; 
} 

int main()
{
    int n;
    cout<<"Nhap n: ";
    cin >> n;
    cout << "Tong cac so tu 1 den N la: " << tinhTong(n) << endl;
    
    return 0;
}

// Bai 6:
#include <iostream>
using namespace std;

int tinhTong(int n, int m) 
{ 
    int tong=0;
    for (int i=n; i<=m; i++) {
        tong += i;
    }
    return tong; 
} 

int main()
{
    int n,m;
    cout<<"Nhap n: ";
    cin >> n;
    cout<<"Nhap m: ";
    cin >> m;
    cout << "Tong cac so tu N den M la: " << tinhTong(n,m) << endl;
    
    return 0;
}

// Bai 7:
#include <iostream>
using namespace std;

bool checkNguyenTo(int x) 
{ 
    bool is_nguyento=true;
    for (int i=2; i<=x-1; i++) {
        if (x%i ==0) {
            is_nguyento = false;
        }
    }
    return is_nguyento; 
} 

int main()
{
    int x, N;
    // Check so nguyen to
    unsigned long long tong=0;
    cout<<"Nhap x: ";
    cin >> x;
    
    if (checkNguyenTo(x)) {
        cout <<x << " la so nguyen to" << endl;
    } else {
        cout <<x << " khong la so nguyen to" << endl;
    }
    // Tinh tong cac so nguyen to tu 1 den N
    cout<<"Nhap N: ";
    cin >> N;
    for (int i=1; i<= N; i++) {
        if (checkNguyenTo(i)) {
            tong +=i ;
        } 
    }
    cout << "Tong cac so nguyen to tu 1 den N la "<< tong << endl; 
    
    return 0;
}

// Bai 8:
#include <iostream>
using namespace std;

int demKytuso(string str) 
{ 
    int dem=0;
    for (int i=0; i<str.length(); i++) {
        if ((str[i] >= '0') && (str[i] <= '9')) {
            dem += 1;
        }
    }
    return dem; 
} 

int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    
    cout << "So ky tu so tu 0 den 9 la "<< demKytuso(str) << endl; 
    
    return 0;
}

// Bai 9
#include <iostream>
using namespace std;

bool checkDangso(string str) 
{ 
    bool is_numeric = true;
    for (int i=0; i<str.length(); i++) {
        if ((str[i] < '0') || (str[i] > '9')) {
            is_numeric = false;
        }
    }
    return is_numeric; 
} 

int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    if (checkDangso(str)) {
        cout << "Chuoi la dang so\n"; 
    } else {
        cout << "Chuoi khong phai la dang so\n"; 
    }
    return 0;
}

// Bai 10:
#include <iostream>
using namespace std;

bool checkCP(int n) 
{ 
    bool is_CP = false;
    for (int i=1; i<n; i++) {
        if (n == i*i) {
            is_CP = true;
        }
    }
    return is_CP; 
} 

int main()
{
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    if (checkCP(N)) {
        cout << "N la so chinh phuong\n"; 
    } else {
        cout << "N khong phai la so chinh phuong\n"; 
    }
    return 0;
}