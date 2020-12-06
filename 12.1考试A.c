#include <stdio.h>

int age(int n,int a,int k){return n==1 ? a : k + age(n-1,a,k);}
	int main()

	{
		int n,a,k;
		scanf("%d%d%d", &n, &a, &k);
		if(n>0 && n>=2 && a>0 && k>0 && a<=100 && k<=100){
		printf("%d",age(n,a,k));
		return 0;
		}
		else printf("Wrong Number");
		return 0;
	}
