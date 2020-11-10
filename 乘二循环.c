//printf a table of squares using a while statement
#include <stdio.h>

int main(void)
{
	int i, n;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	
	i = 1;
	while(i < n){
	    i = i * i;
	    printf("&10%d10%d",i, i * i);
		i++;
	}
	return 0;
}