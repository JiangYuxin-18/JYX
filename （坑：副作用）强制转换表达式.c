#include <stdio.h>

int main(void)
{
	float quotient;
	float dividend, divisor;//��һ��ʼ������ʱ�򣬾�д��float��������int������������0�������ã�
	
	dividend = 1, divisor = 2;
	quotient = dividend / divisor;
	printf("The answer is:%f",quotient);
	
	return 0;
}
/*Ҳ����д�ɣ�
float q
int dd,dr;

dd=1,dr=2;
q=dd/(float)dr;    ������q=(float)dd/dr*/