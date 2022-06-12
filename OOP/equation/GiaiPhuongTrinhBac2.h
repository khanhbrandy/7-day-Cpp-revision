#pragma once

#include "iostream"
#include "string"
using namespace std;

class GiaiPhuongTrinhBac2
{
private:
	float a, b, c, delta;
	float x1, x2;
	void hienThi();
	void nhap();
	void tinhDelta();
public:
	void giaiPhuongTrinh();

	GiaiPhuongTrinhBac2()
	{
		a = 1;
		b = 0; c = 0; delta = 0;
	}
	~GiaiPhuongTrinhBac2()
	{
		a = 0;
	}
};

