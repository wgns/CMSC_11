#include <stdio.h>

int main() {
	float rf;

	do {
		printf("\nEnter the observed rainfall amount within the past hour (in mm): ");
		scanf("%f", &rf);
	} while (rf < 0);

	if (rf < 7.5) {
		printf("\n%.1f mm means no advisory needed but flooding is still possible in certain areas.\n", rf);
	} else if (rf >= 7.5 && rf <= 15) {
		printf("\n%.1f mm means a yellow rainfall advisory. Communities given this advisory are advised to be aware of the weather condition and warned that ﬂooding may be possible in low-lying areas.\n", rf);
	} else if (rf > 15 && rf <= 30) {
		printf("\n%.1f mm means an orange rainfall advisory. Flooding is a deﬁnite threat in communities under the orange alert.\n", rf);
	} else if (rf > 30) {
		printf("\n%.1f mm means a red rainfall advisory. It means serious ﬂooding is seen and that residents should be ready to evacuate to safety.\n", rf);
	}

	return 0;
}
