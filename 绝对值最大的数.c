#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int max = 0;
	int a;
	int i = 0;
	
	scanf("%d", &n);
	
	while(i < n){
		i++;
		scanf("%d", &a);
		if(abs(max) < abs(a))
			max = a;	
	}
	printf("%d\n", max);
	return 0;
}
