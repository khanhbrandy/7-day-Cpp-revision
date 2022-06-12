
#include <iostream>
#include "string"
#include "fstream"
using namespace std;

int main()
{
    fstream f, fw;
    string str;
    fw.open("nhapDuLieu.txt", ios::app);
    f.open("test.txt", ios::in);
    if (f.is_open()) {
        cout << "File ton tai\n";

        while (!f.eof()) {
            getline(f, str);
            //cout << str << endl;
            fw << str << endl;
        }

        f.close();
    }
    else {
        cout << "File khong ton tai\n";
    }
    fw.close();

    /*string str;
    fstream f;
    f.open("nhapDuLieu.txt", ios::app);

    do {
        getline(cin, str);
        if (str.length() != 0) {
            f << str << endl;
        }
    } while (str.length() > 0);
    f.close();*/

    /*fstream f;
    f.open("test.txt", ios::app);
    f << "Hello world line 1\n";
    f << "Line 2" << endl;
    f << "Line 3\n";
    f.close();*/
}
