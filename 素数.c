#include <stdio.h>

int main()
{
	int x;
	int isprime = 1;         //   x������
	scanf("%d", &x);
	for( int i = 2; i < x; i++ ){
		if( x % i == 0){
			isprime = 0;
		}
	}
	if( isprime == 1){
		printf("������\n");
	}else{
		printf("��������\n");
	}
	return 0;
}