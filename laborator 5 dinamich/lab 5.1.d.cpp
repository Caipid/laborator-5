#include<iostream>;
#include<locale>;
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	int n ;
	int count = 0;
	double x, a1;
	cout << "Введите размер масива:";
	cin >> n;
	double *a = new double[n];
	cout << "Введите первый элемент масива:";
	cin >> x;
	a[0] = x;
	for (int i = 1; i < n; i++) {
		cout << "\nВведите следующий элемент масива:";
		cin >> a1;
		a[i] = a1;
		if (a[i - 1] > a[i]) {
			cout <<"Порядковый номер:" << (i);
			count++;
		}
	}
	cout << "Количество чисел удовлетворяющих условию:" << count;
}
