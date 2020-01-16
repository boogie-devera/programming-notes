#include <stdio.h>

int sumOfDigits(int);

int main(void) {
	int num, sum, sumx;
	scanf("%d", &num);
	sum = sumOfDigits(num);
	printf("%d \n", sum);
	sumx = sumOfDigits(num);
	printf("%d \n", sumx);
	return 0;
}

int sumOfDigits(int num) {
	if (num == 0) {
		return num;
	}
	return num % 10 + sumOfDigits(num / 10);
}

int sumOfDigitsX(int num) {
	int sum = 0;

	while (num > 0) {
		sum = sum + num % 10;
		num = num /10;
	}

	return sum;
}
