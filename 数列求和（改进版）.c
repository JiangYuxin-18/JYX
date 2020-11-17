//最后输入零才能结束程序
#include <stdio.h>

int main()
{
	long n,sum = 0;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate):");
	
	scanf("%ld",&n);
	while(n!= 0){
		sum+=n;
		scanf("%ld",&n);
	}
	printf("The sum is:%ld\n",sum);
	printf("Size of int:%d\n",sizeof(int));//最安全的方法就是写成printf（“%lu”，（unsigned long）sizeof（int））；
	return 0;
}