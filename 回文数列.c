#include <stdio.h>
#include <string.h>

int main()
{
	
	int n;  			   //���������
	int i, j;
	char a[50] = {0}; 
	
	scanf("%d", &n);
	for(int p = 0; p < n; p++){
		scanf("%s", a);
	    char c[50];    //��������c[50];ϵͳ�����ַ������Զ���� ��ֵ�� '\0'
	    for (i=0;a[i]!='\0';i++)   //��a���鿽����c����
		c[i]=a[i];
		c[i]='\0';        //����c�������Ͽ�ֵ����,����c[]��ѭ����ӡ
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
