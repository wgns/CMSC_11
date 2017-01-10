#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	srand((unsigned int)time(NULL));
	int c = 1, r, x;

	r = rand() % 100 + 1;

	printf("\nA number from 1-100 will be generated randomly. Try to guess the number within five tries. Remember! Five tries only: ");

	while (true) {
		scanf("%d", &x);

		if (x == r) {
			printf ("\nCongratulations! You got the correct number!\n");
			break;
		} else if (c == 5 && x != r) {
			printf("\nSorry! You ran out of tries. The answer is %d. Try again next time!\n", r);
			break;
		} else if (x < r) {
			printf("Sorry! Enter a higher number, please: ");
		} else if (x > r) {
			printf("Sorry! Enter a lower number, please: ");
		}

		c++;
	}

	

	return 0;
}