#pragma once
#include "iostream"
using namespace std;
class SoPhuc
{
public:
	float phanThuc;
	float phanAo;

	SoPhuc()
	{
		phanThuc = 0;
		phanAo = 0;
	}
	SoPhuc(float _pt, float _pa)
	{
		phanThuc = _pt;
		phanAo = _pa;
	}
	void khoiTao(float pt, float pa);
	void nhap();
	void hienThi();
	void cong(SoPhuc b);
};

