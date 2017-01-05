#include <stdio.h>

int main() {
	int cm;

	printf("\nEnter a measurement in centimeters: ");
	scanf("%i", &cm);

	int km_extra = cm % 100000;
	int km = (cm - km_extra) / 100000;
	int m_extra = km_extra % 100;
	int m = (km_extra - m_extra) / 100;

	printf("\nThe input is %i cm. It is equivalent to %i km, %i m and %i cm.\n", cm, km, m, m_extra);

	return 0;
}
