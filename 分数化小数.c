//������С����a/b,С�����cλ��
#include <stdio.h>

int main(void)
{
	float a, b;
	int c;
	float result;
	
	printf("Enter a, b, c:\n");
	scanf("%d%d%d",&a, &b, &c);
	
	result = a/(float)b;
	
	
	printf("the number is:%.*f",c, result);//ע�⣺��%f������%d������
	return 0;
}