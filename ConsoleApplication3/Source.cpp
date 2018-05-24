#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("введите номер задания: ");
	scanf("%d", &n);

	int x = 0, y = 0, f = 0, z=0;
	int a = 0, b = 0, c = 0;

	if (n==1)
	{
		//1.	Дано натуральное (целое неотрицательное) число, а и целое положительное число d. Вычислить частное q и остаток r при делении, а на d
		int a = 0, d = 0;
		printf("введите а: ");
		scanf("%d", &a);

		printf("введите d: ");
		scanf("%d", &d);

		int q = 0, r = 0;

		if (a>=0 && d>0)
		{
			q = a / d;
			r = a%d;
			printf("Частное q от деления a на d: %d\nОстаток r от деления a на d: %d\n", q, r);
		}
	}
	else if (n==2)
	{
		//2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y, если x равен 0, иначе 144/(x*y).
		int x = 0, y = 0, f = 0;
		printf("введите x: ");
		scanf("%d", &x);

		printf("введите y: ");
		scanf("%d", &y);

		if (x==0 && y==0)
		{
			printf("f = %d\n", f);
		}
		else if (x!=0 && y==0)
		{
			f = 12 / x;
			printf("f = %d\n", f);
		}
		else if (x==0 && y!=0)
		{
			f = 12 / y;
			printf("f = %d\n", f);
		}
		else
		{
			f = 144 / (x*y);
			printf("f = %d\n", f);
		}
	}
	else if (n==3)
	{
		//3.	Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x
		printf("введите x: ");
		scanf("%d", &x);

		printf("введите y: ");
		scanf("%d", &y);

		if (x>y)
		{
			f = x - y;
			printf("f = %d\n", f);
		}
		else
		{
			f = y - x;
			printf("f = %d\n", f);
		}
	}
	else if (n==4)
	{
		//4.	Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x. Предполагается, что значения параметров больше нуля.  
		double x1 = 0, y1 = 0, f1 = 0;

		printf("введите x: ");
		scanf("%lf", &x1);

		printf("введите y: ");
		scanf("%lf", &y1);

		if (x1>y1)
		{
			f1 = x1 / y1;
			printf("f = %lf\n", f1);
		}
		else
		{
			f1 = y1/x1;
			printf("f = %lf\n", f1);
		}
	}
	else if (n==5)
	{
		//5.	Напишите функцию double f(double x, double y, double z), 
		//которая возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля
		double x1 = 0, y1 = 0, z1 = 0;

		printf("введите x: ");
		scanf("%lf", &x1);

		printf("введите y: ");
		scanf("%lf", &y1);

		printf("введите z: ");
		scanf("%lf", &z1);

		double m=0, n=0, k=0, f1 = 0;

		if (x1<y1 && y1<z1)
		{
			k = x1;
			m = y1;
			n = z1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
		else if (x1<z1 && z1<y1)
		{
			k = x1;
			m = z1;
			n = y1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
		else if (y1<x1 && x1<z1)
		{
			k = y1;
			m = x1;
			n = z1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
		else if (y1<z1 && z1<x1)
		{
			k = y1;
			m = z1;
			n = x1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
		else if (z1<x1 && x1<y1)
		{
			k = z1;
			m = x1;
			n = y1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
		else if (z1<y1 && y1<x1)
		{
			k = z1;
			m = y1;
			n = x1;
			f1 = (m*n) / k;
			printf("f = %lf\n", f1);
		}
	}
	else if (n==6)
	{
		//6.	Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.
		printf("введите a: ");
		scanf("%d", &a);

		printf("введите b: ");
		scanf("%d", &b);

		printf("введите c: ");
		scanf("%d", &c);

		if (a<b && a<c)
		{
			f = a;
			printf("Наименьшее из чисел a, b и c: %d\n", f);
		}
		else if (b<a && b<c)
		{
			f = b;
			printf("Наименьшее из чисел a, b и c: %d\n", f);
		}
		else if (c<a && c<b)
		{
			f = c;
			printf("Наименьшее из чисел a, b и c: %d\n", f);
		}
	}
	else if (n==7)
	{
		//7.	Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.
		printf("введите a: ");
		scanf("%d", &a);

		printf("введите b: ");
		scanf("%d", &b);

		printf("введите c: ");
		scanf("%d", &c);

		if (a>b && a>c)
		{
			f = a;
			printf("Наибольшее из чисел a, b и c: %d\n", f);
		}
		else if (b>a && b>c)
		{
			f = b;
			printf("Наибольшее из чисел a, b и c: %d\n", f);
		}
		else if (c>a && c>b)
		{
			f = c;
			printf("Наибольшее из чисел a, b и c: %d\n", f);
		}
	}
	
}