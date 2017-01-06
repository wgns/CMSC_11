#include <stdio.h>

int main() {
	int l, w;

	printf("\nEnter the length of a rectangle: ");
	scanf("%i", &l);

	printf("Enter the width of a rectangle: ");
	scanf("%i", &w);

	int area = l * w;
	int peri = (2 * l) + (2 * w);

	printf("\nThe area of the rectangle is %i square units and its perimeter is %i units.\n", area, peri);

	return 0;
}
