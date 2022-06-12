/* Bai tap vong lap while */
// Bai 1:

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, M, dem = 1, chuso;
    cout<<"Nhap N:";
    cin >> N;
    M = N;
    while (M>10) {
        M = M/10;
        dem += 1;
    }
    cout << "So chu so cua N la: " << dem << endl; 
    do {
        chuso = N/pow(10,dem-1);
        N -= chuso*pow(10,dem-1);
        dem -= 1;
        switch (chuso) {
            case 1:
                cout << "mot ";
                break;
            case 2:
                cout << "hai ";
                break;
            case 3:
                cout << "ba ";
                break;
            case 4:
                cout << "bon ";
                break;
            case 5:
                cout << "nam ";
                break;
            case 6:
                cout << "sau ";
                break;
            case 7:
                cout << "bay ";
                break;
            case 8:
                cout << "tam ";
                break;
            case 9:
                cout << "chin ";
                break;
        }
        
    } while (dem >0);

    return 0;
}

// C2: 
#include <iostream>
using namespace std;

int main()
{
    unsigned long long N, temp;
    cout << "Nhap so nguyen duong bat ky: ";
    cin >> N;
    temp = N;
    // Dem so luong phan tu cua N
    int demChuSo = 0;
    int Tich = 1;
    do {
        // tinh tich
        Tich *= N % 10;
        demChuSo++;
        N /= 10;
    } while (N != 0);
    cout << "\nSo luong chu so = " << demChuSo << endl;
    cout << "Tich cac chu so = " << Tich << endl;
    // hien thi dang chu
    N = temp;
    do {
        int soChia = pow(10, demChuSo - 1);
        int soTach = N / soChia;
        switch (soTach)
        {
        case 0:
            cout << "khong ";
            break;
        case 1:
            cout << "mot ";
            break;
        case 2:
            cout << "hai ";
            break;
        case 3:
            cout << "ba ";
            break;
        case 4:
            cout << "bon ";
            break;
        case 5:
            cout << "nam ";
            break;
        case 6:
            cout << "sau ";
            break;
        case 7:
            cout << "bay ";
            break;
        case 8:
            cout << "tam ";
            break;
        case 9:
            cout << "chin ";
            break;
        default:
            break;
        }
        // tachchu so ben trai
        N %= soChia;
        demChuSo--;
    } while (N > 0);
    return 0;
}

// Bai 2: 
#include <iostream>
using namespace std;

int main()
{
    int N, tich = 1, chuso;
    cout<<"Nhap N:";
    cin >> N;
    while (N>10) {
        chuso = N % 10;
        N = N/10;
        tich *= chuso;
    }
    tich *= N;
    cout << "Tich cac chu so cua N la: " << tich << endl; 

    return 0;
}

//  Bai 3: 
#include <iostream>
using namespace std;

int main()
{
    int soMax = 0, soMin = 0, N, tong = 0, soLuong = 0;
    bool isFirstNum = true;
    // cach 1. su dung do...while
    do {
        cout << "Nhap so nguyen duong bat ky: ";
        cin >> N;
        if (N > 0) {
            tong += N;
            soLuong++;
            // tim min, max
            if (isFirstNum) {
                soMax = N;
                soMin = N;
                isFirstNum = false;
            }
            soMax = N > soMax ? N : soMax;
            soMin = N < soMin ? N : soMin;
        }
    } while (N != 0);
    cout << "Trung binh cong = "
        << (float) tong / (float)soLuong << endl;
    cout << "Gia tri max = " << soMax << endl
        << "Gia tri min = " << soMin << endl;

    return 0;
}
// Bai 4:

#include <iostream>
using namespace std;

int main()
{
    int N, chuso, le = 0, chan =0;
    cout<<"Nhap N:";
    cin >> N;
    while (N>10) {
        chuso = N % 10;
        N = N/10;
        if (chuso % 2 ==0) {
            chan += 1;
        } else {
            le += 1;
        }
    }
    if ((chan ==0)&&(le>1)) {
        cout << "Cac chu so deu la so le \n"; 
    } else if ((le ==0)&&(chan>1)) {
        cout << "Cac chu so deu la so chan \n"; 
    }
    

    return 0;
}

// Bai 5:

#include <iostream>

using namespace std;

int main()
{
    int a, b, ucln, tich;
    cout<<"Nhap a: ";
    cin >> a;
    cout<<"Nhap b: ";
    cin >> b;
    tich = a*b;
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
    cout << "UCLN cua 2 so la " << a << endl;
    cout << "BCNN cua 2 so la " << (tich/a) << endl;
    return 0;
}

// C2: 
#include <iostream>

using namespace std;

int main()
{
    int a, b, boiChungMin = 1, uocChungMax = 1;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    // tim uoc chung max
    int giaTriMin = a > b ? b : a;
    for (int i = giaTriMin; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            uocChungMax = i;
            break;
        }
    }
    cout << "Uoc chung max = " << uocChungMax << endl;
    // tim boi chung nho nhat
    int giaTriMax = a > b ? a : b;
    for (int i = giaTriMax; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            boiChungMin = i;
            break;
        }
    }
    cout << "Boi chung min = " << boiChungMin << endl;
    return 0;
}


// Bai 6:

#include <iostream>

using namespace std;

int main()
{
    int a, b, gia_tri_min;
    cout<<"Nhap a: ";
    cin >> a;
    cout<<"Nhap b: ";
    cin >> b;
    gia_tri_min = a > b ? b : a;
    for (int i=1; i< gia_tri_min; i++) {
            if ((a%i == 0)&&(b%i ==0)) {
                cout << i << endl;
            }
    }
        
    return 0;
}

// Bai 7: 

#include <iostream>

using namespace std;

int main()
{
    int N, cnt_so_duong = 0, cnt_so_am = 0;
    do {
        cout<<"Nhap N:";
        cin >> N;
        if (N > 0) {
            cnt_so_duong += 1;
        }
        if (N < 0) {
            cnt_so_am += 1;
        }

    } while (N != 0);
    if (cnt_so_duong == cnt_so_am) {
        cout << "Day can bang";
    } else if (cnt_so_duong > cnt_so_am) {
        cout << "Day so duong";
    } else {
        cout << "Day so am";
    }
    
    return 0;
}

// Bai 8:


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, alpha, so_hang = 0, tong = 0, giai_thua = 1, n = 1;
    cout<<"Nhap x:";
    cin >> x;
    cout<<"Nhap alpha:";
    cin >> alpha;
    do {
        for (int i=1; i<= 2*n+1; i++) {
            giai_thua *= i;
        }
        so_hang = (pow(x,2*n+1))/giai_thua;
        tong += so_hang;
        n ++;
    } while (so_hang > alpha );
    cout << "Tong la: " << tong << endl;
    
    
    return 0;
}



// Bai 12:


#include <iostream>
using namespace std;

int
main ()
{
  int N, i;
  cout << "Nhap so dong: ";
  cin >> N;
  for (int i = 1; i <= N; i++)
    {
// hien thi dau " " (N - i)
      for (int j = 1; j <= (N - i); j++)
    {
      cout << " ";
    }
// hien thi dau * (i)
      for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
      cout << endl;
    }

  return 0;
}

// Bai 13:

#include <iostream>

using namespace std;

int main()
{
    int N, soLanNhap = 0, i = 0;
    
    do {
        cout<<"Nhap N:";
        cin >> N;
        if (N <0) {
            soLanNhap++;
        } else {
           while (i*i <= N) {
            cout << i*i << " ";
            i++;
        } 
        break;
        }
        
    } while (soLanNhap<= 3);

    return 0;
}