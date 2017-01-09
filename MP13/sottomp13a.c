#include <stdio.h>

int main() {
	int km, cm, ctr, var;

	printf("\nEnter a measurement in kilometers: ");
	scanf("%i", &km);

	var = km;
	ctr = 0;

	while (ctr < 5) {
		cm = km / .1;
		km = cm;
		ctr = ctr + 1;
	}

	printf("\n%i km is equivalent to %i cm.\n", var, cm);

	return 0;
}
