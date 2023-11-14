#include <locale>
#include <iostream>
using namespace std;
int main() {
	int n;
	setlocale(LC_ALL, "ru");
	cout << "¬ведите размер масива:";
	cin >> n;
	int a[10];
	if ((n < 1) || (n > 10)) {
		cout << "ќшибка, неверный размер масива";
		return 1;
	}
	for (int i = 0, a1; i < n; i++)cout << "¬ведите элемент масива:",cin >> a1, a[i] = a1;
	for (int j = 0, b[10]; j < n-1; j++) {
		b[j] = a[j + 1], cout << b[j];
	}
	cout << 0;
}