#include <stdio.h>

int factorial(int num) {
	if (num == 1) {
		return 1;
	}

	return factorial(num - 1)*num;
}

int main() {
	int facsum = factorial(5);

	printf("5! =%d\n", facsum);

	return 0;
}