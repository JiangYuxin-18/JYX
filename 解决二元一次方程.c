//请同学们做一个二元一次方程
#include <stdio.h>
int main()
{
	//ax + by = c
	//mx + ny = p
	int x, y;
	int a, b, c, m, n, p;
	printf("请输入二元一次方程的系数");
	scanf("%d %d %d %d %d %d,", &a, &b, &c, &m, &n, &p) ;
	x = (c-b*y)/a;
	y = (p*a-m*c)/(a*n-b*m);
	printf("%d , %d",x,y);
	
	return 0;
} 
