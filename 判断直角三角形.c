#include <stdio.h>

int main()
{
	int n;
	int x, e, d;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d%d%d",&a, &b, &c);
		if(a - b < c &&a + b > c&& a - c < b && a + c > b && b  +c > a && b - c < a)
		{
		if(a > b && a > c){
			x = a;
			e = b;
			d = c;}
		else if(b > a && b > c){
			x = b;
			e = a;
			d = c;}
		else if(c > a && c > b){
			x = c;
			e = a;
			d = b;}
		if(x*x - e*e == d*d )
			printf("Yes\n");
		else 
			printf("No\n");
		}
		else 
		printf("No\n");
	}
		
	return 0;
}
