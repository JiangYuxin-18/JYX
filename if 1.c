#include <stdio.h>

int main()
{
	int i, j, max;
	
	printf("Enter the number:");
	scanf("%d%d",&i ,&j);
	
	if(i > j)
	    max = i;
	else
	    max = j;
    printf("The anwser is:%d\n",max);
    return 0;
 } 
