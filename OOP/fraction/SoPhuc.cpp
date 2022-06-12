#include "SoPhuc.h"

void SoPhuc::khoiTao(float pt, float pa)
{
	phanThuc = pt;
	phanAo = pa;
}
void SoPhuc::nhap()
{
	cout << "Nhap so phuc: \n"
		<< "\tPhan thuc: ";
	cin >> phanThuc;
	cout << "\tPhan ao: ";
	cin >> phanAo;
}

void SoPhuc::cong(SoPhuc b)
{
	phanThuc = phanThuc + b.phanThuc;
	phanAo = phanAo + b.phanAo;
}

void SoPhuc::hienThi()
{
	cout << "So phuc: ";
	if (phanThuc == 0 && phanAo == 0) {
		cout << "0\n";
	}
	else if (phanThuc == 0) {
		cout << phanAo
			<< "*i \n";
	}
	else if (phanAo == 0) {
		cout << phanThuc
			<< endl;
	}
	else {
		if (phanAo > 0) {
			cout << phanThuc
				<< " + "
				<< phanAo
				<< "*i\n";
		}
		else {
			cout << phanThuc
				<< " "
				<< phanAo
				<< "*i\n";
		}
	}
}