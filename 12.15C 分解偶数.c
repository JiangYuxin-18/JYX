#include <stdio.h>
#include <math.h>
int ODD_PRIME(int n, int m);

int main()
{
	int n;	//输入的数
	int x, y;	//奇素数
	int j = 0, i = 0;
	scanf("%d", &n);
	if(n >=6 && n % 2 == 0)
	{
		for (j = 3; j <= n/2; j += 2) 
		{
			x = j;
			y = n - j;
			ODD_PRIME(x, y);
			int res = ODD_PRIME(x, y);//定义一个返回值
			if(res == 1)
				printf("%d %d\n",x ,y);
		}
	}
	else
	printf("ERROR\n");
	return 0;
}

int ODD_PRIME(int n, int m)
{
	int i, j;
	int k, h;
	k = sqrt(n);
	h = sqrt(m);
	for (i = 2; i <= k; i++) 
	{
		if (n % i == 0)
			break;
	}
	for (j = 2; j <= h; j++) 
	{
		if (m % j == 0)
			break;
	}
	if (i > k && j > h)
		return 1;
	else 
		return 0;
}