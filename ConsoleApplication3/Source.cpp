#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	int x = 0, y = 0, f = 0, z=0;
	int a = 0, b = 0, c = 0;

	if (n==1)
	{
		//1.	���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. ��������� ������� q � ������� r ��� �������, � �� d
		int a = 0, d = 0;
		printf("������� �: ");
		scanf("%d", &a);

		printf("������� d: ");
		scanf("%d", &d);

		int q = 0, r = 0;

		if (a>=0 && d>0)
		{
			q = a / d;
			r = a%d;
			printf("������� q �� ������� a �� d: %d\n������� r �� ������� a �� d: %d\n", q, r);
		}
	}
	else if (n==2)
	{
		//2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y).
		int x = 0, y = 0, f = 0;
		printf("������� x: ");
		scanf("%d", &x);

		printf("������� y: ");
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
		//3.	�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x
		printf("������� x: ");
		scanf("%d", &x);

		printf("������� y: ");
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
		//4.	�������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����.  
		double x1 = 0, y1 = 0, f1 = 0;

		printf("������� x: ");
		scanf("%lf", &x1);

		printf("������� y: ");
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
		//5.	�������� ������� double f(double x, double y, double z), 
		//������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����
		double x1 = 0, y1 = 0, z1 = 0;

		printf("������� x: ");
		scanf("%lf", &x1);

		printf("������� y: ");
		scanf("%lf", &y1);

		printf("������� z: ");
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
		//6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
		printf("������� a: ");
		scanf("%d", &a);

		printf("������� b: ");
		scanf("%d", &b);

		printf("������� c: ");
		scanf("%d", &c);

		if (a<b && a<c)
		{
			f = a;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
		else if (b<a && b<c)
		{
			f = b;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
		else if (c<a && c<b)
		{
			f = c;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
	}
	else if (n==7)
	{
		//7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
		printf("������� a: ");
		scanf("%d", &a);

		printf("������� b: ");
		scanf("%d", &b);

		printf("������� c: ");
		scanf("%d", &c);

		if (a>b && a>c)
		{
			f = a;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
		else if (b>a && b>c)
		{
			f = b;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
		else if (c>a && c>b)
		{
			f = c;
			printf("���������� �� ����� a, b � c: %d\n", f);
		}
	}
	
}