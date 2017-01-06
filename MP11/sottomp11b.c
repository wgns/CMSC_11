#include <stdio.h>

int main() {
	float euro, rate, peso;

	printf("\nEnter an amount in euros: ");
	scanf("%f", &euro);

	printf("Enter the exchange rate of euro to peso: ");
	scanf("%f", &rate);

	peso = euro * rate;

	printf("\n%.3f euros is equivalent to %.2f pesos.\n", euro, peso);

	return 0;
}
