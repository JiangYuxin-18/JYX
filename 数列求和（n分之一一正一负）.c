//计算1/n的一正一负数列求和（n=100）
#include <stdio.h>

int main()
{
	int n;
	float sum = 0;
	int sign = 1;
	scanf("%d",&n);
	for( int i = 1; i <= n; i++ ){
		 sum += sign*1/(float)i;
		 sign = -sign;
	}
	printf("f(%d)=%f\n", n, sum);
	
	return 0;
}