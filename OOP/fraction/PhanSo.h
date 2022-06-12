#pragma once
#include "iostream"
using namespace std;
class PhanSo
{
	int tuSo, mauSo;
	void rutGon();
	int timUcMax();
public:
	void nhap();
	void hienThi();
	void cong(PhanSo ps);
	PhanSo() 
	{
		tuSo = 0; mauSo = 1;
	}
	PhanSo(int a, int b)
	{
		tuSo = a;
		mauSo = b;
		if (mauSo == 0) {
			tuSo = 0; mauSo = 1;
		}
	}
};

