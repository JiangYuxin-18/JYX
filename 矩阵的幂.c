#include <stdio.h>

int main(){
	int n,k,i,j,m;
	scanf("%d %d",&n,&k);
	long int a[8][8]={0},b[8][8]={0},c[8][8]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
		}
	}
	while(--k){
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
		}
	}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				for(m=0;m<n;m++)
					c[i][j] += b[i][m]*a[m][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=c[i][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%ld ",c[i][j]);
		printf("\n");
	}
	return 0;
}
