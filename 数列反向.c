//输出反向顺序的奇数，并且再多两位
#include <stdio.h>
#define N 5

int main()
{
	int a[N], i;
	
	printf("Enter %d numbers:",N);
	for(i = 0; i < N; i++)
	scanf("%d",&a[i]);
	
	printf("In reverse order:");
	for(i = N - 1; i >= 0; i--)
	//i = N - 1;i >= 0;i-=2则输出奇数位
	//i = N - 2;i >= 0;i-=2则输出偶数位
	printf(" %d",a[i]+i);
	printf("\n");
	
	return 0;
}