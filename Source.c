#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

void task1();
void task2();
void task3();

double a, b, y;

void main() {
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
}

void task1()
{
	float gr = 0.f;

	printf("Введите градусы: ");
	scanf_s("%f", &gr);

	float rad = gr * M_PI / 180;
	float result = sin(rad);

	printf("Ответ: %.6f\n", result);
}

void task2()
{
	double t = 3.0;
	double x;
	printf("Введите x: ");
	scanf_s("%lf", &x);
	a = 1.0 / t + pow(x, 3);
	b = pow(t, 2) * sqrt(fabs(a + x));
	y = pow(log(fabs(b + pow(a, 2))), 5);
	printf("y = %.2f\n", y);
}


void task3()
{
	// a)
	puts("Только одно из чисел А и В четное");
	int res1 = (((int)a % 2 == 0) && ((int)b % 2 != 0) || (((int)a % 2 != 0) && ((int)b % 2 == 0)));
	printf("Условие выполнено (1 - да, 0 - нет): %d\n", res1);
	// b)
	puts("Каждое из чисел А,В,С кратно трем");
	int res2 = (((int)a % 3 == 0) && ((int)b % 3 == 0) && ((int)y % 3 == 0));
	printf("Условие выполнено (1 - да, 0 - нет): %d\n", res2);
}