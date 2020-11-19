#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int k;
	k = sqrt(n);
	for (i = 2; i <= k; i++) {
		if (n % i == 0)
			break;
	}
	if (i <= k)
		printf("This is not a prime.\n");
	else
		printf("This is a prime.\n");
	return 0;
}
