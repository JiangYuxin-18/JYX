//�������˳��������������ٶ���λ
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
	//i = N - 1;i >= 0;i-=2���������λ
	//i = N - 2;i >= 0;i-=2�����ż��λ
	printf(" %d",a[i]+i);
	printf("\n");
	
	return 0;
}