#include<iostream>;
#include<locale>;
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	const int SIZE = 10;
	int n;
	int count = 0;
	double x;
	cout << "Введите количество элементов массива";
	cin >> n;
	if (((1 > n) || (n > SIZE))) {
		cout << "Ошибка, неверный размер масива";
		return 1;
	}
	double a[SIZE];
	cout << "Введите первый элемент масива:";
	cin >> x;
	a[0] = x;
	for (int i = 1; i < n; i++) {
		cout << "\nВведите следующий элемент масива:";
		cin >> a[i];
		if (a[i - 1] > a[i]) {
			cout <<
				"Порядковый номер:"<<(i);
			count++;
		}
	}
	cout << "\nКоличество чисел удовлетворяющих условию:"<< count;
}
