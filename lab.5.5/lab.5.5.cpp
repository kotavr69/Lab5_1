#include <iostream>
using namespace std;

int n, i;

int main() {
	setlocale(LC_ALL, "ru");
	float a[9];
	cout << "Введите не чётную длину массива n<=9: ";
	cin >> n;
	if ((n <= 9) && (n % 2 != 0)) {

		for (i = 0; i < n; i++) {
			cout << "Введите элемент массива: ";
			cin >> a[i];
		}
		for (i = n-1; i > 0; i--) {
			if (i % 2 == 0) {
				continue;
			}
			cout << a[i] << endl;
		}
	}
	else {
		cout << "Неверно заданный элемент массива!";
	}
	return 0;
}
