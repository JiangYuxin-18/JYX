#include <stdio.h>
int main()
{
	int x;
	int a,b,c;
	printf("����������һ����λ����\n");
	scanf("%d",&x);
	a = x/100;
	b = x/10%10;
	c = x%10;

    printf("%d\n%d\n%d\n",c,b,a);
    return 0;
}
