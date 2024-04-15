#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(0, ".1251");

	int number, base;

	//printf("\n1 Перевод чисел из десятичной системы счисление в любую");
	//printf("\nВведите число для перевода: ");
	//scanf("%d", &number);
	//printf("\nВведите основание целевой системы счисления: ");
	//scanf("%d", &base);

	//if (number < 0) {
	//	number *= -1;
	//	printf("-");
	//}

	//for (int number2 = 0, power = 1; ; power *= 10) {
	//	number2 += (number % base) * power;
	//	number /= base;

	//	if (number == 0) {
	//		printf("%d\n", number2);
	//		break;
	//	}
	//}

	//printf("\n2 Перевод чисел из любой системы счисления в десятичную");
	//printf("\nВведите число для перевода: ");
	//scanf("%d", &number);
	//printf("\nВведите основание системы счисления: ");
	//scanf("%d", &base);

	//if (number < 0) {
	//	number *= -1;
	//	printf("-");
	//}

	//for (int number2 = 0, power = 1; ; power *= base) {
	//	number2 += (number % 10) * power;
	//	number /= 10;

	//	if (number == 0) {
	//		printf("%d", number2);
	//		break;
	//	}
	//}

	//printf("\n3 Разложение числа на простые множители");
	//printf("\nВведите число для разложения: ");
	//scanf("%d", &number);

	//for ( int i = 2; number != 1;) {
	//	if (number % i == 0) {
	//		printf("%d ", i);
	//		number /= i;
	//	}
	//	else {
	//		i++;
	//	}
	//}

	//printf("\n4 Среднее арифметическое всех цифр числа");
	//printf("\nВведите число для расчета: ");
	//scanf("%d", &number);

	//for (int sum = 0, i = 1; ; i++) {
	//	sum += (number) % 10;
	//	number /= 10;
	//	if (number == 0) {
	//		printf("%lf", (double)sum / i);
	//		break;
	//	}
	//}

	printf("\n5 Сортировка цифр в числе");
	printf("\nВведите число для сортировки: ");
	scanf("%d", &number);

	for (; ; ) {
		for (int digit, number2 = number; ;) {
			int min = 9;
			digit = number2 % 10;
			number2 /= 10;
			if (digit < min) {
				min = digit;
			}
			if (number2 == 0) {
				printf("%d", min);
				number /= 10;
				break;
			}
		}
		if (number == 0) {
			break;
		}
	}
}