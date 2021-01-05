#include <stdio.h>

int main(){
	int n,t,i,j,flag=0,k=1;
	scanf("%d",&n);
	int a[100];
	int b[100]={'\0'};
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<k;j++){
			if(b[j]==a[i]){
				flag=1;
				break;
				
			}
			
		}
		if(!flag)
		b[k++]=a[i];
		
	}
	printf("%d",k);
	return 0;
}
