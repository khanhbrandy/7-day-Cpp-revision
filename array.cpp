/* Bai tap lap trinh mang */

// Bai 1:

#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG], mangam[SO_LUONG], mangduong[SO_LUONG];
    int am_count = 0, duong_count = 0;
    // Nhap N
    int N;
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // Nhap mang
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    for (int i = 0; i < N; i++) {
        if (mang[i] > 0) {
            duong_count ++;
            mangduong[duong_count-1] = mang[i];
        } else {
            am_count ++;
            mangam[am_count-1] = mang[i];
        }
    }
    
    // In ra mang ban dau
    cout << "Mang ban dau:";
    for (int i = 0; i < N; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
    // In ra mang am
    cout << "Mang am: ";
    for (int i = 0; i < am_count; i++) {
        cout << mangam[i] << " ";#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG], soMax, idx_soMax, soMin, idx_soMin, tongBPchan=0, countK = 0;
    bool isFirstNum = true;
    // Nhap N
    int N;
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // Nhap K
    int K;
    cout << "Nhap so nguyen K: ";
    cin >> K;
    // Nhap mang
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    // Tim so lon nhat, be nhat
    for (int i = 0; i < N; i++) {
        if (isFirstNum) {
            // So max
            soMax = mang[i];
            idx_soMax = i;
            // So min
            soMin = mang[i];
            idx_soMin = i;
            isFirstNum = false;
        } else {
            // So max
            soMax =  mang[i] > soMax ? mang[i] : soMax ;
            idx_soMax = mang[i] > soMax ? i : idx_soMax ;
            // So min
            soMin =  mang[i] > soMin ? soMin : mang[i] ;
            idx_soMin = mang[i] > soMin ? idx_soMin : i ;
        }
        if (i % 2 ==0) {
            tongBPchan += mang[i]*mang[i];
        }
        if (mang[i] == K) {
            countK ++;
        }
    }
    // In ket qua
    cout << "Gia tri lon nhat la: " << soMax << " o vi tri: " << idx_soMax << endl;
    cout << "Gia tri nho nhat la: " << soMin << " o vi tri: " << idx_soMin << endl;
    cout << "Tong binh phuong cac so o vi tri chan: " << tongBPchan<< endl;
    cout << "So phan tu bang K la: "<<countK<< endl;

    return 0;
}


    }
    cout << endl;
    // In ra mang duong
    cout << "Mang duong: ";
    for (int i = 0; i < duong_count; i++) {
        cout << mangduong[i] << " ";
    }
    cout << endl;
    return 0;
}

// Bai 2:
#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG], soMax, idx_soMax, soMin, idx_soMin, tongBPchan=0, countK = 0;
    bool isFirstNum = true;
    // Nhap N
    int N;
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // Nhap K
    int K;
    cout << "Nhap so nguyen K: ";
    cin >> K;
    // Nhap mang
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    // Tim so lon nhat, be nhat
    for (int i = 0; i < N; i++) {
        if (isFirstNum) {
            // So max
            soMax = mang[i];
            idx_soMax = i;
            // So min
            soMin = mang[i];
            idx_soMin = i;
            isFirstNum = false;
        } else {
            // So max
            soMax =  mang[i] > soMax ? mang[i] : soMax ;
            idx_soMax = mang[i] > soMax ? i : idx_soMax ;
            // So min
            soMin =  mang[i] > soMin ? soMin : mang[i] ;
            idx_soMin = mang[i] > soMin ? idx_soMin : i ;
        }
        if (i % 2 ==0) {
            tongBPchan += mang[i]*mang[i];
        }
        if (mang[i] == K) {
            countK ++;
        }
    }
    // In ket qua
    cout << "Gia tri lon nhat la: " << soMax << " o vi tri: " << idx_soMax << endl;
    cout << "Gia tri nho nhat la: " << soMin << " o vi tri: " << idx_soMin << endl;
    cout << "Tong binh phuong cac so o vi tri chan: " << tongBPchan<< endl;
    cout << "So phan tu bang K la: "<<countK<< endl;

    return 0;
}

// Bai 5:
#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG], N, tong;
    bool isFirstNum = true;
    // Nhap N
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // Nhap mang
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    
    // 
    for (int i = 0; i < N-1; i++) {
        tong = mang[i] + mang[i+1];
        if (tong % 10 ==0) {
            mang[i] = tong;
            mang[i+1] = tong;
        }
    }
    // In ra mang 
    cout << "Mang moi: ";
    for (int i = 0; i < N; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;

    return 0;
}

// Bai 8:
#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG], N, X, y, z, tong;
    bool isFirstNum = true;
    // Nhap N
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // Nhap mang
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    
    // Nhap vi tri z va gia tri X de nhap vao mang
    cout << "Nhap vi tri  chen: ";
    cin >> z;
    cout << "Nhap gia tri X: ";
    cin >> X;
    // Chen X vao vi tri z
    for (int i=N; i >= z; i--)  {
        mang[i] = mang[i-1];
    }
    N++;
    mang[z-1] = X;
    
    // Xoa phan tu o vi tri y: 
    cout << "\n Nhap vi tri  xoa: ";
    cin >> y;
    for (int i=y-1; i< N-1; i++)  {
        mang[i] = mang[i+1];
    }
    N++;
    // In ra mang 
    cout << "Mang moi: ";
    for (int i = 0; i < N; i++) {
        cout << mang[i] << " ";
    }
    N--;
    cout << endl;

    return 0;
}

// Bai 9
#include <iostream>
using namespace std;
#define     SO_LUONG    100

int main()
{
    int mang[SO_LUONG];
    // nhap so luong phan tu
    int N;
    cout << "Nhap so luong phan tu: ";
    cin >> N;
    // nhap du lieu
    for (int i = 0; i < N; i++) {
        cout << "Nhap phan tu thu "<<i+1<<": ";
        cin >> mang[i];
    }
    // sap xep mang tang dan
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (mang[i] > mang[j]) {
                // trao doi gia tri cua i va j
                int t = mang[i];
                mang[i] = mang[j];
                mang[j] = t;
            }
        }
    }

    // tim so am max
    int soAmMax = 0;
    bool isFirstNum = true;
    for (int i = 0; i < N; i++) {
        if (mang[i] < 0) {
            if (isFirstNum) {
                soAmMax = mang[i];
                isFirstNum = false;
            }
            else {
                soAmMax = soAmMax < mang[i] ? mang[i] : soAmMax;
            }
        }
    }
    if (isFirstNum) {
        cout << "Khong co so am\n";
    }
    else {
        cout << "So am max = " << soAmMax << endl;
    }

    // tim so max
    int soMax = mang[0];
    for (int i = 1; i < N; i++) {
        soMax = soMax < mang[i] ? mang[i] : soMax;
    }
    cout << "Gia tri max = " << soMax << endl;

    int tong = 0;
    for (int i = 0; i < N; i++) {
        tong += mang[i];
    }
    cout << "Tong = " << tong << endl;
    //xoa phan tu dau tien
    for (int i = 0; i < N - 1; i++) {
        mang[i] = mang[i + 1];
    }
    N--;
    
    // hien thi du lieu
    for (int i = 0; i < N; i++) {
        cout << "Phan tu thu "<<i + 1<<" = " 
            << mang[i] << endl;
    }
}