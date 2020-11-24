#include <stdio.h>
#define N 5

int main()
{
	int a[N],i;
	int j=0;
	int count[5]={0};
	printf("Enter the numbers:\n");
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++){
		j=a[i];
		if(count[j-1]==1){
			printf("the repeat number is %d\n",j);
		}
		else{
			count[j-1]++;
		}
	}
	return 0;
}