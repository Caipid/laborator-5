#include <locale>
#include <iostream>
using namespace std;
int main() {
	int n;
	setlocale(LC_ALL, "ru");
	cout << "Введите размер масива:";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите элемент масива:";
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		a[i - 1] = a[i];
		cout << a[i - 1];
	}
	a[n-1] = 0;
	cout << a[n-1];
	delete[] a;
}