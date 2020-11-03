//已知两直角边，请计算三角形的面积 
#include <stdio.h>

int main()
{
	int a, b;
	int s;
	
	printf("请输入三角形的两个直角边长数值：");
	scanf("%d%d",&a,&b);
	s =(a*b)/2;
	printf("%d",s);
	
	return 0;
 } 
