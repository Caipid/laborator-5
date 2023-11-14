#include <locale>
#include <iostream>
using namespace std;
int main() {
	int n;
	setlocale(LC_ALL, "ru");
	cout << "Введите размер масива:";
	cin >> n;
	int *a = new int [n];
	for (int i = 0, a1; i < n; i++)cout << "Введите элемент масива:",cin >> a1, a[i] = a1;
	for (int j = 0, b[10]; j < n - 1; j++) {
		b[j] = a[j + 1], cout << b[j];
	}
	cout << 0;
}