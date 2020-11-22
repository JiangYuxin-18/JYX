//分数化小数（a/b,小数点后c位）
#include <stdio.h>

int main(void)
{
	float a, b;
	int c;
	float result;
	
	printf("Enter a, b, c:\n");
	scanf("%d%d%d",&a, &b, &c);
	
	result = a/(float)b;
	
	
	printf("the number is:%.*f",c, result);//注意：是%f而不是%d！！！
	return 0;
}