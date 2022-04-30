#include <iostream> // подключаем ввод/вывод - функции cin/cout
#include <math.h> // подключаем exp и fabs
#include <conio.h> // подключаем getch

int main()
{
	using namespace std;
	double x; // точка, в которой будет высчитываться значение ряда
	double eps = 0.001; // погрешность, с которой будет вычисляться значение ряда
	double an, sum; // текущий an и текущая сумма ряда
	double n; // текущий номер
	cout << "вводим с клавиатуры x ";
	cin >> x ;//вводим с клавиатуры x
	an = 1;
	sum = 1;
	n = 0;
	// значение ряда будем вычислять в цикле while
	while (fabs(an) > eps)
	{
		n = n + 1.0;
		an = -an * x / n;
		sum = sum + an;
	}
	cout << sum << " "; // выводим сумму
	cout << exp(-x); // выводим значение, подсчитанной по контрольной формуле exp(x)
	int getch(); // ждём нажатия клавиши
}