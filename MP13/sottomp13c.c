#include <stdio.h>

int main() {
	int n, seq1, seq2, sum, ctr;

	printf("\nEnter a positive number: ");
	scanf("%i", &n);

	seq1 = 1;
	seq2 = 1;
	sum = seq1 + seq2;
	ctr = 0;

	while (ctr < n) {
		printf("%i ", seq1);
		seq1 = seq2;
		seq2 = sum;
		sum = seq1 + seq2;
		ctr = ctr + 1;
	}

	return 0;
}
