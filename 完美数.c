#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	for(i=2;i<=1000;i++)
	{
		int sum=0;
		for(n=1;n<i;n++)
		{
			if(i%n==0)
			sum+=n;
		}
		if(i==sum)
		{
			printf("%d=1",i);
			for(n=2;n<=i-1;n++)
			{
				if(i%n==0)
				printf("+%d",n);
			}
			printf("\n");
		}
	}
	return 0;
}
