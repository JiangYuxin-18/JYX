#include <stdio.h>

int main(void)
{
	int digits = 0, n;
	
	printf("Enter a nonnegative integer:");
	scanf("%d",&n);
	
	for(; n>0; digits++){
		n /= 10;
	}
	printf("The number has %d digit(s).\n",digits);
	
	return 0;
}