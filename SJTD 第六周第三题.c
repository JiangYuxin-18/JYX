#include <stdio.h>

int main()
{
	int a, b, s, result;
	printf("Enter two number");
	scanf("%d %d", &a, &b);
	s = (a*a)+(b*b);
	if(s>=100)
	printf("result = %d",s/100);
	else 
	printf("%d", s);
	return 0;
}
	
	