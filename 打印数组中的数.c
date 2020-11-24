//打印数组中元素的时候，需要使用for循环，请记住套路！！！
#include <stdio.h>

int main()
{
	int a[10]={1},i;
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	return 0;
}
//打印出来为 1000000000 因为剩余空位默认是0