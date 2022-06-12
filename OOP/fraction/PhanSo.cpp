#include "PhanSo.h"

void PhanSo::nhap()
{
	cout << "Nhap phan so: "
		<< "\tTu so: ";
	cin >> tuSo;
	cout << "\tMau so: ";
	cin >> mauSo;
	if (mauSo == 0) {
		tuSo = 0;
		mauSo = 1;
	}
	rutGon();
}

int PhanSo::timUcMax()
{
	int a = abs(tuSo);
	int b = abs(mauSo);
	int soMin= a > b ? b : a;
	for (int i = soMin; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
	return 1;
}

void PhanSo::rutGon()
{
	int uocChungMax = timUcMax();
	tuSo = tuSo / uocChungMax;
	mauSo = mauSo / uocChungMax;
	if (tuSo > 0 && mauSo < 0) {
		tuSo *= -1;
		mauSo *= -1;
	}
	else if (tuSo < 0 && mauSo < 0) {
		tuSo *= -1;
		mauSo *= -1;
	}
}

void PhanSo::hienThi()
{
	rutGon();
	cout << "Phan so = ";
	if (tuSo == 0) {
		cout << "0\n";
	}
	else if (mauSo == 1) {
		cout << tuSo << endl;
	}
	else {
		cout << tuSo
			<< "/"
			<< mauSo << endl;
	}
}

void PhanSo::cong(PhanSo ps)
{
	tuSo = tuSo * ps.mauSo + mauSo * ps.tuSo;
	mauSo = mauSo * ps.mauSo;
	rutGon();
}