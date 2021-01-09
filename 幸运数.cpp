#include <iostream>
using namespace std;

int main(){
    int A[10000],B[10000],i=0,j,x,n;
	    scanf("%d",&x);
		    do{    
				A[i]=x%10;
			    x=x/10;
				    i++;
			}
			while(x!=0);
			n=i-1;
			i=0;
			for(j=n;j>=0;j--)
			{    
				B[j]=A[i];
				i++;
			}    
			for(i=0;i<n;i++)    
			{    
				if(A[i]!=B[i])    
				{    
					printf("no");
					return 0;    
				}    
			}    
			printf("yes");    
			return 0;
}
