#include <stdio.h>

int main()
{
	int i, j;
	
	printf("Enter the number:");
	scanf("%d%d",&i ,&j);
	
	
    printf("The anwser is:%d\n",i > j ? i : j);
    return 0;
 } 
