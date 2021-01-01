#include <stdio.h>

int main(){
	int a, b, c, d, e;
	int m, n;
	int f, g, h, i, j;
	while(scanf("%d %d %d %d %d",&a, &b, &c, &d, &e) && a != 0 && b != 0 && c != 0 && d != 0 && e != 0){
	
	if(a-b == b-c && b-c == c-d && c-d == d-e){
		m = b - a;
	    printf("case one\n");
	    printf("%d %d %d %d %d\n",e + m,e + m + m,e + m * 3,e + m + m + m + m,e + m * 5);
	}
	if(e / d == d / c && d / c == c / b && c / b == b / a){
		n = e / d;
		printf("case two\n");
		printf("%d %d %d %d %d\n",e*n,e*n*n,e*n*n*n,e*n*n*n*n,e*n*n*n*n*n);
	}
	if(c == a + b && d == b + c && e == c + d){
		f = d + e;
		g = e + f;
		h = f + g;
		i = g + h;
		j = h + i;
		printf("case three\n");
		printf("%d %d %d %d %d\n", f, g, h, i, j);
	}
}
	return 0;
}
