#include <stdio.h>

int main ()
{
	int i, j, k, max;
	printf("Enter the number:");
	scanf("%d%d%d",&i, &j, &k);
	
	if(i > j){
		if(i > k)
		  max = i;
		else
		  max = k;
	}else{
	 if(j > k)
	   max = j;
	 else
	   max = k;
	}
	printf("The answer is:%d\n",max);
	return 0;
}
