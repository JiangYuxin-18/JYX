#include <stdio.h>

int main()
{
	int x;
	int isprime = 1;         //   x是素数
	scanf("%d", &x);
	for( int i = 2; i < x; i++ ){
		if( x % i == 0){
			isprime = 0;
		}
	}
	if( isprime == 1){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	return 0;
}