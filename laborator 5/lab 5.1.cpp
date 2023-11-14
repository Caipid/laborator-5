#include<iostream>;
#include<locale>;
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	const int SIZE = 10;
	int n;
	int count = 0;
	double x , a1;
	cout << "Введите количество элементов массива";
	cin >> n;
	if (((1 > n) || (n > 10))) {
		cout << "Ошибка, неверный размер масива";
		return 1;
	}
	int a[SIZE];
	cout << "Введите первый элемент масива:";
	cin >> x;
	a[0] = x;
	for (int i = 1; i < n; i++) {
		cout << "\nВведите следующий элемент масива:";
		cin >> a1;
		a[i] = a1;
		if (a[i - 1] > a[i]) {
			cout <<
				"Порядковый номер:"<<(i);
			count++;
		}
	}
	cout << "\nКоличество чисел удовлетворяющих условию:"<< count;
}
