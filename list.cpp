
#include <iostream>
#include <list>
#include <string>
#include <thread>
using namespace std;

bool isDinhDangSoNguyen(string str)
{
	if (str.length() == 0) {
		return false;
	}
	else {
		int index = 0;
		if (str[0] == '-') {
			index = 1;
			if (str.length() == 1) {
				return false;
			}
		}
		for (int i = index; i < str.length(); i++) {
			if (str[i] < '0' || str[i] > '9') {
				return false;
			}
		}
		return true;
	}
}

void func1(int a)
{
	for (int i = 1; i < a; i++) {
		cout << i << endl;
	}
}
void func2(char c)
{
	for (char ch = 'a'; ch < c; ch++) {
		cout << ch << endl;
	}
}
int main()
{
	//func1();
	//func2();
	thread t1 = thread(func1, 10);
	thread t2 = thread(func2, 'u');
	t1.join();
	t2.join();

	//list<int> a;
	//a.push_back(12);
	//a.push_back(14);
	//a.push_back(4);
	//a.push_back(-12);
	//a.push_back(2);
	//a.push_back(22);
	//a.push_back(32);
	//a.push_back(10);
	//a.push_back(4);

	//list<int>::iterator i;
	//i = a.begin();
	////i++;
	//advance(i, 5);
	//a.erase(i);

	//a.sort();
	//a.unique();
	//a.remove(12);
	/*cout << "Nhap day so nguyen: ";
	string str;
	do {
		getline(cin, str);
		if (isDinhDangSoNguyen(str)) {
			a.push_back(stoi(str));
		}
	} while (str.length() != 0);*/
	//list <int> a;
	//// them phan tu vao list a
	//a.push_back(100);
	//a.push_back(4);
	//a.push_back(10);
	//a.push_front(-20);
	//cout << "Size = " << a.size() << endl;
	//// xoa du lieu
	//a.pop_back();
	// hien thi list
	//list<int>::iterator it;
	//int sum = 0;
	//for (it = a.begin(); it != a.end(); it++) {
	//	cout << *it << endl;
	//	sum += *it;
	//}
}

