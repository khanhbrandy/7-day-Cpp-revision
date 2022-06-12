#include <iostream>
#include "SoPhuc.h"
#include "PhanSo.h"
int main()
{
    PhanSo ps1(0, -1), ps2 (2, 1),
        ps3(2, -5), ps4 (-2, -3);
    ps1.hienThi();
    ps2.hienThi();
    ps3.hienThi();
    ps4.hienThi();
    ps4.cong(ps3);
    ps4.hienThi();


    /*SoPhuc sp1, sp2(3, -6),sp3(0, -3);
    SoPhuc sp4;
    sp1.khoiTao(1.2, 0);
    sp1.hienThi();
    sp2.hienThi();
    sp3.hienThi();
    sp4.hienThi();
    sp4.cong(sp3);
    cout << "Tong = ";
    sp4.hienThi();*/
}
