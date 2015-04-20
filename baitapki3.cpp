// tinh tong cac s=1-2+3-4+.....+(-1)^(n+1)*n
#include <iostream>
using namespace std;
void main()
{
	int tong = 0, dau = 1, i, n;
	cout << "\n Chuong trinh tinh tong s=1-2+3-4+.....+(-1)^(n+1)*n";
	cout << "\n moi nhap n ? ";
	cin >> n; cin.ignore();
	for (i = 1; i <= n; i++)
	{
		tong += i*dau;
		dau = -dau;
	}
	cout << "\n Tong se la: " << tong;
	cin.get();
}