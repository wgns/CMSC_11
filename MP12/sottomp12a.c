#include <stdio.h>

int main() {
	int ws;

	do {
		printf("\nEnter a wind speed in kph: ");
		scanf("%i", &ws);
	} while (ws < 0); 

	if (ws <= 63) {
		printf("\n%i kph belongs to a Tropical Depression.\n", ws);
	} else if (ws >= 63 && ws <= 118) {
		printf("\n%i kph belongs to a Tropical Storm.\n", ws);
	} else if (ws > 118) {
		printf("\n%i kph belongs to a Typhoon.\n", ws); 
	}

	return 0;
}
