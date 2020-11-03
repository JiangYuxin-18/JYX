#include <stdio.h>

int main()
{
	int i, n, j;
	i = 1; 
	j = 1;
	printf("Enter a number:");
	scanf("%d",&n);
	while (j<n){
	  i = i * 2;
	  j ++;
    }
	printf("i = %d\n",i);
	
	return 0;
}
