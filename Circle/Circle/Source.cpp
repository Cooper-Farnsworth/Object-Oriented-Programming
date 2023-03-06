#include"Circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Circle mas[3];
	double r, x, y;
	for (int i = 0; i < 3; i++)
	{	
		cout << "введите радиус и координаты окружности:" << endl;
		cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
		cout << endl;
	}

	double a, b, c;
	cout << "//////////////////////////////////////////////////////////////////////////////////////////////////" << endl;;
	for (int i = 0; i < 3; i++)
	{
		cout << "введите стороны треугольника:" << endl;
		cin >> a >> b >> c;
		cout << "площадь окружности: " << mas[i].square() << endl;
		cout << "вписанная окружность: " << mas[i].triangle_around(a, b, c) << endl;
		cout << "описанная окружность: " << mas[i].triangle_in(a, b, c) << endl << endl;;
	}
	return 0;
}