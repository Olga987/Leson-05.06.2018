#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;
start:
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1)
	{
#pragma region 1.	������ � ���������� ��� �����. ����������, ��� ������, ����� ��������� ��� ������� ����� ���� �����. ����� ������� � ���� ���������.
		float x = 0, y = 0, answer = 0, answer2 = 0;

		printf("������� �������� x:");
		scanf("%f", &x);

		printf("������� �������� y:");
		scanf("%f", &y);

		answer = pow(x, 2) + pow(y, 2);
		answer2 = pow((x + y), 2);

		if (answer > answer2)
			printf("����� ��������� ������\n");

		else if (answer < answer2)
			printf("������� ����� ������");


#pragma endregion
	}

	else if (n == 2)
	{
#pragma region 2.	���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, �������� ���������� 2%,  ���� ���� �� 5 �� 10 ��� - 5%. ������ � ���������� �������� � ����, ������� �������� � ����� � �������.
		float st = 0, zp = 0, nad = 0, sum = 0;
		st = 1 + rand() % 10;
		zp = 1 + rand() % 2000;
		printf("%f\t%f\n", st, zp);

		if (st >= 2 && st < 5) {
			nad = (zp / 100) * 2;
			sum = zp *0.2;
			printf("%f\n%f\n", nad, sum);
		}
		else if (st >= 5 && st < 10) {
			nad = (zp / 100) * 5;
			sum = zp*0.2;
			printf("%f\n%f\n", nad, sum);
#pragma endregion
		}
	}

	else if (n == 3)
	{
#pragma region 3.	������ � ���������� ��� �����, ������������� �������� � �������, � ������������� �������� ��� ���������.
		int a = 0, b = 0, c = 0;
		a = -100 + rand() % 100;
		b = -100 + rand() % 100;
		c = -100 + rand() % 100;

		if (a > 0)
			a = pow(a, 2);
		if (b > 0)
			b = pow(b, 2);
		if (c > 0)
			c = pow(c, 2);
		printf("a=%d\nb=%d\nc=%d\n", a, b, c);
#pragma endregion

	}

	else if (n == 4)
	{
#pragma region 4.	���� ����������� �����. ����������, �������� �� ��� ������, ��� ������������ ������ 3.
		int x = 0;
		x = 1 + rand() % 100;
		printf("%d\n", &x);

		if ((x % 10 == 3) || (x % 100 == 3))
			printf("����� ������������ �� 3\n");
		else if (x % 2 == 0)
			printf("����� �������� ������\n");
#pragma endregion

	}

	else if (n == 5)
	{
#pragma region 5.	���������� ����� ����������� ������ ��������� �� ��������, ���� ������� ��������� �� ������� ��� 6% ������� ��� �� ��� ��� 8% �������. � ���������� ������ ����� ������ � ���� ��������
		float sum = 0, srok = 0;
		printf("������� ����� ������:");
		scanf("%f", &sum);

		printf("������� ���� �������� � �������:");
		scanf("%f", &srok);

		if (srok <= 6) {
			sum = sum + (sum*0.6);
			printf("%f\n", sum);
		}
		else if (srok > 6) {
			sum = sum + (sum*0.8);
			printf("%f\n", sum);
		}
#pragma endregion


	}

	else if (n == 6)
	{
#pragma region 	1.	���������, �������� �� ��� ���������� (������� 4) � �������� �� 2000 �� ����� ��� �� 2000 ����� ���. ������ � ������ ��� � ������� ���

		int g = 0;
		g = -2000 + rand() % 2000;
		printf("���  %d\n", abs(g));

		if (g > 0)
			printf("����� ���\n");
		if (g < 0)
			printf("�� ����� ���\n");
		if ((g % 4 == 0) && (g % 100 != 0) && (g % 400 == 0))
			printf("����������\n");
		else
			printf("������������\n");
#pragma endregion
	}

	else if (n == 7)
	{
#pragma region 2.	��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� ����� ������� ��������� 1000 �����.
		float sum = 0, skidka = 0, sump = 0;

		sum = (1 + rand() % 10000) / (1 + rand() % 10);
		printf("%f\n", sum);

		if (sum > 1000) {
			skidka = (sum / 100) * 10;
			sump = sum - skidka;
			printf("����� ������� %f\n", sump);

		}
		else
			printf("������� ��� ������\n");
#pragma endregion
	}
	else if (n == 8)
	{
#pragma region 3.	�������� ��������� ���������� ���������� ���� ������������ (���� 100). ������ ������������ � ������������� ����������� ���� ��������.
		int r = 0, v = 0, pol = 0, V = 0, Recom = 0;
		r = 50 + rand() % 200;
		v = 20 + rand() % 200;
		pol = 1 + rand() % 2;
		printf("����-%d\n���-%d\n���%d\n", r, v, pol);

		if (pol == 1)
		{
			V = r - 10;
			if (v > V) {
				Recom = v - V;
				printf("���������� �������� �� %d��\n ", Recom);
			}
			if (V > v) {
				Recom = V - v;
				printf("���������� ����������� �� %d��\n ", Recom);
			}
		}
		else
		{
			V = r - 5;
			if (v > V) {
				Recom = v - V;
				printf("���������� �������� �� %d��\n ", Recom);
			}
			if (V > v) {
				Recom = V - v;
				printf("���������� ����������� �� %d��\n ", Recom);
			}
		}
#pragma endregion
	}

	else if (n == 9)
	{
#pragma region 1.	������ � ���������� ����� ������. ���������� ����� � ����������� �� ������ ������ � ������� ��������� (����� (3,4,5), ���� (6,7,8), ����� (9,10,11)  ���� (12,1,2))

		int m = 0;
		printf("������� ����� ������ ");
		scanf("%d", &m);

		switch (m)
		{
		case 3:
		case 4:
		case 5:
		{
			printf("�����\n");
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			printf("�����\n");
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("����\n");
			SetConsoleTextAttribute(hConsole, 15);
		}

	defauit:
		break;
		}
#pragma endregion
	}
	else if (n == 10)
	{
#pragma region 
	}
	goto start;
}