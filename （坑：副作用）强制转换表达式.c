#include <stdio.h>

int main(void)
{
	float quotient;
	float dividend, divisor;//在一开始声明的时候，就写成float，而不是int，否则会算出来0（副作用）
	
	dividend = 1, divisor = 2;
	quotient = dividend / divisor;
	printf("The answer is:%f",quotient);
	
	return 0;
}
/*也可以写成：
float q
int dd,dr;

dd=1,dr=2;
q=dd/(float)dr;    或者是q=(float)dd/dr*/