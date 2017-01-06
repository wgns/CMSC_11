#include <stdio.h>

int main() {
	int n1, d1, n2, d2, ans_up, ans_down;

	printf("\nEnter your first fraction (separate the numerator and the denominator with a space): ");
	scanf("%i%i", &n1, &d1);

	printf("Enter your second fraction: ");
	scanf("%i%i", &n2, &d2);

	ans_up = (n1 * d2) - (n2 * d1);
	ans_down = d1 * d2;

	printf("\n%i/%i minus %i/%i is equal to %i/%i.\n", n1, d1, n2, d2, ans_up, ans_down);

	return 0;
}
