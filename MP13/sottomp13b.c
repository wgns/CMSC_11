#include <stdio.h>

int main() {
	int n, cf, var;

	printf("\nEnter a positive number: ");
	scanf("%i", &n);

	cf = n - 1;

	while (var > 0 && cf > 0) {
		var = n - (cf * (n / cf));
		cf = cf - 1;
	}

	if (cf > 1) {
		printf("\n%i is not a prime number.\n", n);
	} else if (cf == 0) {
		printf("\n%i is a prime number.\n", n);
	}

	return 0;
}
