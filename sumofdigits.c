#include <stdio.h>

int sumOfDigits(int);

int main(void) {
	int num, sum;
	scanf("%d", &num);
	sum = sumOfDigits(num);
	printf("%d", sum);
	return 0;
}

int sumOfDigits(int num) {
	if (num == 0) {
		return num;
	}
	return num % 10 + sumOfDigits(num / 10);
}

