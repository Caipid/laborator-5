#include <locale>
#include <iostream>
using namespace std;
int main() {
	int n;
	const int size = 10;
	setlocale(LC_ALL, "ru");
	cout << "¬ведите размер масива:";
	cin >> n;
	int a[size];
	if ((n < 1) || (n > size)) {
		cout << "ќшибка, неверный размер масива";
		return 1;
	}
	for (int i = 0, a1; i < n; i++) {
		cout << "¬ведите элемент масива:";
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		a[i - 1] = a[i];
		cout << a[i - 1];
	}
	a[size-1] = 0;
	cout << a[size-1];
}  