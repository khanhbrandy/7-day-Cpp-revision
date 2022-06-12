#include "GiaiPhuongTrinhBac2.h"

void GiaiPhuongTrinhBac2::nhap()
{
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;
}

void GiaiPhuongTrinhBac2::hienThi()
{
	if (delta < 0) {
		cout << "Phuong trinh vo nghiem\n";
	}
	else if (delta == 0) {
		cout << "Phuong trinh co nghiem kep. "
			<< "x1 = x2 = "
			<< -b / (2 * a)
			<< endl;
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co 2 nghiem phan biet: \n"
			<< "\tx1 = " << x1
			<< "\n\tx2 = " << x2 << endl;
	}
}

void GiaiPhuongTrinhBac2::tinhDelta()
{
	delta = b * b - 4 * a * c;
	cout << "delta = " << delta << endl;
}

void GiaiPhuongTrinhBac2::giaiPhuongTrinh()
{
	nhap();
	tinhDelta();
	hienThi();
}
