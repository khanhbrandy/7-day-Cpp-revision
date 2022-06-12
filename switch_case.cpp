// Bai 1:
#include <iostream>

using namespace std;

int main()
{
    int thang;
    cout<<"Nhap thang: ";
    cin >> thang;
    switch (thang) {
        case 1:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 2:
        cout << "Thang " << thang << " co 28 ngay" << endl;
        break;
        case 3:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 4:
        cout << "Thang " << thang << " co 30 ngay" << endl;
        break;
        case 5:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 6:
        cout << "Thang " << thang << " co 30 ngay" << endl;
        break;
        case 7:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 8:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 9:
        cout << "Thang " << thang << " co 30 ngay" << endl;
        break;
        case 10:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        case 11:
        cout << "Thang " << thang << " co 30 ngay" << endl;
        break;
        case 12:
        cout << "Thang " << thang << " co 31 ngay" << endl;
        break;
        default:
        cout << "Khong phai thang trong nam!";
    }

    return 0;
}

// Bai 2:
#include <iostream>

using namespace std;

int main()
{
    int color;
    cout<<"Nhap mau: ";
    cin >> color;
    if ((color == 'R')&&(color == 'r')) {
        cout<<"RED \n";
    } else if ((color == 'G')&&(color == 'g')) {
        cout<<"GREEN \n";
    } else if ((color == 'B')&&(color == 'b')) {
        cout<<"BLUE \n";
    } else {
        cout<<"BLACK \n";
    }
    

    return 0;
}

// Bai 4:
#include <iostream>

using namespace std;

int main()
{
    int thu;
    cout<<"Nhap thu: ";
    cin >> thu;
    if ((thu>=2)&&(thu<=7)) {
        cout << "Thu " << thu << endl;
    } else {
        cout << "Khong phai thu trong tuan \n";
    }
    

    return 0;
}

// Bai 5:
#include <iostream>

using namespace std;

int main()
{
    for (int k=10;k<= 200; k++) {
        if ((k % 7 == 0)||(k % 3 == 0)) {
            cout << k << endl;
        }
    }
    

    return 0;
}

// Bai 6:
#include <iostream>

using namespace std;

int main()
{
    char k, chuhoa;
    for (k='a'; k<= 'z'; k++) {
        chuhoa = k + ('A'-'a');
        cout << k << "-" << chuhoa << endl;
    }
    

    return 0;
}

// Bai 8:
#include <iostream>

using namespace std;

int main()
{
    int n, tongle = 0, tongchan =0, tongbinhphuong =0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i=1; i<= n; i++)  {
        if (i % 2 == 0) {
            tongchan += i;
        } else if (i % 2 == 1) {
            tongle += i;
            tongbinhphuong += i*i;
        } 
    }
    cout << "Tong cac so le tu 1 den " << n<< " la " << tongle << endl;
    cout << "Tong cac so chan tu 1 den " << n<< " la " << tongchan << endl;
    cout << "Tong binh phuong cac so le tu 1 den " << n<< " la " << tongbinhphuong << endl;
}

// Bai 9:
#include <iostream>

using namespace std;

int main()
{
    int n, giaithua =1 ;
    cout << "Nhap n: ";
    cin >> n;
    for (int i=1; i<= n; i++)  {
        giaithua = giaithua *i;
    }
    cout << "Giai thua cua so " << n<< " la " << giaithua << endl;
    
}
