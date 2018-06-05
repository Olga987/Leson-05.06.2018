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
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1)
	{
#pragma region 1.	Ввести с клавиатуры два числа. Определить, что больше, сумма квадратов или квадрат суммы этих чисел. Ответ вывести в виде сообщения.
		float x = 0, y = 0, answer = 0, answer2 = 0;

		printf("Введите значение x:");
		scanf("%f", &x);

		printf("Введите значение y:");
		scanf("%f", &y);

		answer = pow(x, 2) + pow(y, 2);
		answer2 = pow((x + y), 2);

		if (answer > answer2)
			printf("сумма квадратов больше\n");

		else if (answer < answer2)
			printf("квадрат суммы больше");


#pragma endregion
	}

	else if (n == 2)
	{
#pragma region 2.	Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, надбавка составляет 2%,  если стаж от 5 до 10 лет - 5%. Ввести с клавиатуры зарплату и стаж, вывести надбавку и сумму к выплате.
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
#pragma region 3.	Ввести с клавиатуры три числа, положительные возвести в квадрат, а отрицательные оставить без изменений.
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
#pragma region 4.	Дано натуральное число. Определить, является ли оно четным, или оканчивается цифрой 3.
		int x = 0;
		x = 1 + rand() % 100;
		printf("%d\n", &x);

		if ((x % 10 == 3) || (x % 100 == 3))
			printf("число оканчивается на 3\n");
		else if (x % 2 == 0)
			printf("число является четным\n");
#pragma endregion

	}

	else if (n == 5)
	{
#pragma region 5.	Рассчитать сумму ежемесячных выплат процентов по депозиту, если договор составлен на полгода под 6% годовых или на год под 8% годовых. С клавиатуры ввести сумму вклада и срок договора
		float sum = 0, srok = 0;
		printf("Введите сумму вклада:");
		scanf("%f", &sum);

		printf("Введите срок договора в месяцах:");
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
#pragma region 	1.	Проверить, является ли год високосным (кратным 4) в пределах от 2000 до нашей эры до 2000 нашей эры. Ввести с экрана год и признак эры

		int g = 0;
		g = -2000 + rand() % 2000;
		printf("год  %d\n", abs(g));

		if (g > 0)
			printf("нашей эры\n");
		if (g < 0)
			printf("до нашей эры\n");
		if ((g % 4 == 0) && (g % 100 != 0) && (g % 400 == 0))
			printf("високосный\n");
		else
			printf("невисокосный\n");
#pragma endregion
	}

	else if (n == 7)
	{
#pragma region 2.	Вычислить стоимость покупки с учетом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 тенге.
		float sum = 0, skidka = 0, sump = 0;

		sum = (1 + rand() % 10000) / (1 + rand() % 10);
		printf("%f\n", sum);

		if (sum > 1000) {
			skidka = (sum / 100) * 10;
			sump = sum - skidka;
			printf("Сумма покупки %f\n", sump);

		}
		else
			printf("Покупка без скидки\n");
#pragma endregion
	}
	else if (n == 8)
	{
#pragma region 3.	Написать программу вычисления идеального веса пользователя (рост 100). Выдать рекомендации о необходимости поправиться либо похудеть.
		int r = 0, v = 0, pol = 0, V = 0, Recom = 0;
		r = 50 + rand() % 200;
		v = 20 + rand() % 200;
		pol = 1 + rand() % 2;
		printf("рост-%d\nвес-%d\nпол%d\n", r, v, pol);

		if (pol == 1)
		{
			V = r - 10;
			if (v > V) {
				Recom = v - V;
				printf("Необходимо похудеть на %dкг\n ", Recom);
			}
			if (V > v) {
				Recom = V - v;
				printf("необходимо поправиться на %dкг\n ", Recom);
			}
		}
		else
		{
			V = r - 5;
			if (v > V) {
				Recom = v - V;
				printf("Необходимо похудеть на %dкг\n ", Recom);
			}
			if (V > v) {
				Recom = V - v;
				printf("необходимо поправиться на %dкг\n ", Recom);
			}
		}
#pragma endregion
	}

	else if (n == 9)
	{
#pragma region 1.	Ввести с клавиатуры номер месяца. Определить сезон в зависимости от номера месяца и вывести сообщение (весна (3,4,5), лето (6,7,8), осень (9,10,11)  зима (12,1,2))

		int m = 0;
		printf("Введите номер месяца ");
		scanf("%d", &m);

		switch (m)
		{
		case 3:
		case 4:
		case 5:
		{
			printf("Весна\n");
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			printf("Осень\n");
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Зима\n");
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