/*#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	int A = 0, B = 0, C = 0;
	int i;
	while (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 0) {
		int f[10];
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
			break;
		if ((b - a == c - b) && (b - a == d - c)) {
			int de = b - a;
			f[0] = e + de;
			for (int i = 1; i < 5; i++) {
				f[i] = f[i - 1] + de;
			}
			A = 1;
		}
		if (b * b == a * c && c * c == b * d) {
			int bi = b / a;
			f[0] = e * bi;
			for (int i = 1; i < 5; i++)
				f[i] = f[i - 1] * bi;
			B = 1;
		}
		if (c == a + b && e == c + d && d == b + c) {
			f[0] = d + e;
			f[1] = f[0] + e;
			f[2] = f[0] + f[1];
			f[3] = f[2] + f[1];
			f[4] = f[3] + f[2];
			C = 1;
		}
		if (A + B + C == 1) {
			if (A == 1) {
				printf("Case One\n");
			} else if (B == 1) {
				printf("Case Two\n");
			} else {
				printf("Case Three\n");
			}
		}
		for (i = 0; i < 5; i++)
			printf("%d ", f[i]);
		printf("\n");
		A = 0, B = 0, C = 0;
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	int i = 0, j = 0;
	int f[100][10], g[100][3];
	for(;i<100;i++){
		scanf("%d %d %d %d %d",&f[i][0],&f[i][1],&f[i][2],&f[i][3],&f[i][4]); 
		if(f[i][0]==0&&f[i][1]==0&&f[i][2]==0&&f[i][3]==0&&f[i][4]==0)
		break;}
	for(int j=0;j<i;j++){
	if(2*f[j][3]==f[j][2]+f[j][4])
		int flag1 = 0, flag2 = 0, flag3 = 0;  //用于判断数列属于哪种情况
		//如果输入0 0 0 0 0则跳出while语句
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
			break;
		//判断是否为等差数列
		if ((b - a == c - b) && (b - a == d - c)) {
			int de = b - a;
			f[j][0] = e + de;
			for (int i = 1; i < 5; i++) {
				f[j][i] = f[j][i - 1] + de;
			}
			flag1 = 1;  //若为等差数列则将flag1赋值为1
		}
		//判断是否为等比数列
		if (b * b == a * c && c * c == b * d) {
			int bi = b / a;
			f[j][0] = e * bi;
			for (int i = 1; i < 5; i++)
				f[j][i] = f[j][i - 1] * bi;
			flag2 = 1;
		}
		//判断是否为斐波那契数列
		if (c == a + b && e == c + d && d == b + c) {
			f[j][0] = d + e;
			f[j][1] = f[j][0] + e;
			f[j][2] = f[j][0] + f[j][1];
			f[j][3] = f[j][2] + f[j][1];
			f[j][4] = f[j][3] + f[j][2];
			flag3 = 1;
		}
		g[j][0] = flag1;
		g[j][1] = flag2;
		g[j][2] = flag3;
		j++;
	}
	//输出后五个数
	for (i = 0; i < j; i++) {
		//判断该数列是否只符合一种情况
		if (g[i][0] + g[i][1] + g[i][2] == 1) {
			if (g[i][0] == 1) {
				printf("case one\n");
			} else if (g[i][1] == 1) {
				printf("case two\n");
			} else {
				printf("case three\n");
			}
		}
		for (int k = 0; k < 5; k++)
			printf("%d ", f[i][k]);
		printf("\n");
	}
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	int i;
	while (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 0) {
		int f[10];
		int flag1 = 0, flag2 = 0, flag3 = 0;  //用于判断数列属于哪种情况
		//如果输入0 0 0 0 0则跳出while语句
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
			break;
		//判断是否为等差数列
		if ((b - a == c - b) && (b - a == d - c)) {
			int de = b - a;
			f[0] = e + de;
			for (int i = 1; i < 5; i++) {
				f[i] = f[i - 1] + de;
			}
			flag1 = 1;  //若为等差数列则将flag1赋值为1
		}
		//判断是否为等比数列
		if (b * b == a * c && c * c == b * d) {
			int bi = b / a;
			f[0] = e * bi;
			for (int i = 1; i < 5; i++)
				f[i] = f[i - 1] * bi;
			flag2 = 1;
		}
		//判断是否为斐波那契数列
		if (c == a + b && e == c + d && d == b + c) {
			f[0] = d + e;
			f[1] = f[0] + e;
			f[2] = f[0] + f[1];
			f[3] = f[2] + f[1];
			f[4] = f[3] + f[2];
			flag3 = 1;
		}
		//判断该数列是否只符合一种情况
		if (flag1 == 1){
			printf("case one\n");
			for (i = 0; i < 5; i++)
			printf("%d ", f[i]);}
		if (flag2 == 1){
			printf("case two\n");
			for (i = 0; i < 5; i++)
			printf("%d ", f[i]);}
		if (flag3 == 1){
			printf("case three\n");
			for (i = 0; i < 5; i++)
			printf("%d ", f[i]);}
		//输出后五个数
		
	}
	return 0;
}
