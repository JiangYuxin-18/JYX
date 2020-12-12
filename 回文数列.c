#include <stdio.h>
#include <string.h>

int main()
{
	
	int n;  			   //输入的行数
	int i, j;
	char a[50] = {0}; 
	
	scanf("%d", &n);
	for(int p = 0; p < n; p++){
		scanf("%s", a);
	    char c[50];    //声明数字c[50];系统会在字符串后自动添加 空值符 '\0'
	    for (i=0;a[i]!='\0';i++)   //当a数组拷贝给c数组
		c[i]=a[i];
		c[i]='\0';        //需在c数组后加上空值符号,否则c[]会循环打印
		for(i = 0, j = strlen(a)-1;i <= j; i++,j--){
    	char temp = a[i];
    	a[i] = a[j];
    	a[j] = temp;
		}
		for(i = 0; i < strlen(c)-1; i++ ){
			if(c[i] != a[i]){
				printf("No\n");
				break;
			}
		}
		if(i==strlen(c)-1)
		printf("Yes\n"); 
	}
	return 0;
	
}
