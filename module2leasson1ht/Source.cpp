#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {

	int n = 1;

	setlocale(LC_ALL, "rus");

		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("00000000000000000               00000000000000000\n");
		printf("0000000000000                       0000000000000\n");
		printf("00000000000                           00000000000\n");
		printf("0000000000                             0000000000\n");
		printf("0000000000                             0000000000\n");
		printf("0000000000     =====          =====    0000000000\n");
		printf("00000000000    =====          =====   00000000000\n");
		printf("000000000000                         000000000000\n");
		printf("0000000000000                       0000000000000\n");
		printf("00000000000000                     00000000000000\n");
		printf("000000000000000                   000000000000000\n");
		printf("0000000000000000                 0000000000000000\n");
		printf("00000000000000000   ---------   00000000000000000\n");
		printf("0000000000000000000  -------  0000000000000000000\n");
		printf("00000000000000000000         00000000000000000000\n");
		printf("0000000000000000000000     0000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("000000           0000  000000  0000        000000\n");
		printf("0000000000   00000000  000000  0000  000000000000\n");
		printf("0000000000   00000000  000000  0000  000000000000\n");
		printf("0000000000   00000000  000000  0000  000000000000\n");
		printf("0000000000   00000000          0000      00000000\n");
		printf("0000000000   00000000  000000  0000  000000000000\n");
		printf("0000000000   00000000  000000  0000  000000000000\n");
		printf("0000000000   00000000  000000  0000        000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000       000   00000  000      0000000000\n");
		printf("0000000000  00000000  0 0000  000  000  000000000\n");
		printf("0000000000  00000000  00 000  000  0000  00000000\n");
		printf("0000000000     00000  000 00  000  0000  00000000\n");
		printf("0000000000  00000000  0000 0  000  000  000000000\n");
		printf("0000000000       000  00000   000      0000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n");
		printf("0000000000000000000000000000000000000000000000000\n\n");
		
		up1:
		do
		{
		printf("������� ����� ������� = ");
		scanf("%d", &n);

		if (n == 1) {
			printf("1.	���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. ��������� ������� q � ������� r ��� �������, � �� d\n");

			int a, d;

			printf("a = ");
			scanf("%d", &a);

			printf("d = ");
			scanf("%d", &d);

			printf("������� = %.0f\n", (float)a/d);
			printf("������� = %d\n", a%d);
			

		}
		else if (n == 2) {
			printf("2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y).\n");
			int  x, y;

			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			if (x == 0 && y == 0)
				printf("f = %d\n", 0);
			else if (y == 0)
				printf("f = %.0f\n", (float)12 / x);
			else if (x == 0)
				printf("f = %.0f\n", (float)12 / y);
			else printf("f = %.0f\n", (float)144 / (x*y));
		}
		else if (n == 3) {
			printf("3.	�������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x\n");

			int x, y;

			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			if (x > y) printf("f = %d\n", x - y); else printf("f = %d\n", y - x);

		}
		else if (n == 4) {
			printf("4.	�������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x. ��������������, ��� �������� ���������� ������ ����.  \n");

			double x, y;

			start:
			printf("x = ");
			scanf("%lf", &x);

			printf("y = ");
			scanf("%lf", &y);

			if (x > 0 && y > 0) {
				if (x > y) printf("f = %lf\n", x / y); else printf("f = %lf", y / x);
			}
			else goto start;
		}
		else if (n == 5){
			printf("5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ����\n");

			double x, y, z, f, m, k;

			printf("x = ");
			scanf("%lf", &x);

			printf("y = ");
			scanf("%lf", &y);

			printf("z = ");
			scanf("%lf", &z);

			if (x < y && x < z)
			{
				k = x;
				m = y;
				n = z;

				f = (m*n) / k;
				printf("f = %lf\n", f);
			}
			else if (y < x && y < z)
			{
				k = y;
				m = x;
				n = z;

				f = (m*n) / k;
				printf("f = %lf\n", f);
			}
			else if (z < x && z < y)
			{
				k = z;
				m = x;
				n = y;

				f = (m*n) / k;
				printf("f = %lf\n", f);
			}
		}
		else if (n == 6) {
			printf("6.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.\n");
			
			int a, b, c;
			
			printf("a = ");
			scanf("%d", &a);

			printf("a = ");
			scanf("%d", &b);

			printf("a = ");
			scanf("%d", &c);

			if (a < b && a < c) printf("f = %d\n", a); 
			else if (b < a && b < c) printf("f = %d\n", b); 
			else if (c < a && c < b) printf("f = %d\n", c);
		}
		else if (n == 7) {
			printf("7.	�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.\n");
			
			int a, b, c;

			printf("a = ");
			scanf("%d", &a);

			printf("a = ");
			scanf("%d", &b);

			printf("a = ");
			scanf("%d", &c);

			if (a > b && a > c) printf("f = %d\n", a);
			else if (b > a && b > c) printf("f = %d\n", b);
			else if (c > a && c > b) printf("f = %d\n", c);
		}
		else if (n == 8) {
			printf("8.	�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false.\n");

			int x, y, z;

			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			printf("z = ");
			scanf("%d", &z);

			if ((pow(x, 2) + pow(y, 2)) == pow(z, 2)) printf("true\n"); else printf("false\n");
		}
		else if (n == 9) {
			printf("9.	�������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����.\n");
			
			int x, y;

			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			if (x%y == 0 || y%x == 0) printf("true\n"); else printf("false\n");
		}
		else if (n == 10) {

			printf("10.	������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������. �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����\n");

			/*unsigned*/ int x, y, z;
			start2:
			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			printf("z = ");
			scanf("%d", &z);

			if (x>0 && y>0 && z>0) /*((x && y && z) > 0)*/ {
				if ((x > y && x > z) && x > (y + z)) printf("true\n");
				else if ((y > x && y > z) && y > (x + z)) printf("true\n");
				else if ((z > x && z > y) && z > (x + y)) printf("true\n"); else printf("false\n");
			}
			else  goto start2; 
		}

	} while (n > 0);
	
	goto up1;

}