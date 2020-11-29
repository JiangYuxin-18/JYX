#include <stdio.h>>

int main()
{
	int x, a, b, c, result, answer;
	
	printf("Enter a number(8 digits):");
	scanf("%d", &x);
	
	a = x / 1000000;
	c = a * 1000000;
	b = x - c;
	result = b / 100;
	answer = result + 1024;
	
	printf("The answer is %d and %d", result, answer);
	
	return 0;
}