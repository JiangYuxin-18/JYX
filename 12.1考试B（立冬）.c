#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[100], b[100], c[100], d[100], e[100];
	int f[10][100][3];
	int flag1[100]={0},flag2[100]={0},flag3[100]={0};
	int l = 0;//l指第几轮输入
	while (scanf("%d %d %d %d %d", &a[l], &b[l], &c[l], &d[l], &e[l]) != 0) {
		
	
		//如果输入0 0 0 0 0则跳出while语句
		if (a[l] == 0 && b[l] == 0 && c[l] == 0 && d[l] == 0 && e[l] == 0)
			break;
		//判断是否为等差数列
		if (((b[l] - a[l]) == (c[l] - b[l])) && ((b[l] - a[l] )== (d[l] - c[l]))) {
			int de = b[l] - a[l];
			f[0][l][0] = e[l] + de;
			for (int i = 1; i < 5; i++) {
				f[i][l][0] = f[i - 1][l][0] + de;
			}
			flag1[l] = 1;  //若为等差数列则将flag1赋值为1
		}
		//判断是否为等比数列
		if (b[l] * b[l] == a[l] * c[l] && c[l] * c[l] == b[l] * d[l]) {
			int bi = b[l] / a[l];
			f[0][l][1] = e[l] * bi;
			for (int i = 1; i < 5; i++)
				f[i][l][1] = f[i - 1][l][1] * bi;
			flag2[l] = 1;
		}
		//判断是否为斐波那契数列
		if (c[l] == a[l] + b[l] && e[l] == c[l] + d[l] && d[l] == b[l] + c[l]) {
			f[0][l][2] = d[l] + e[l];
			f[1][l][2] = f[0][l][2] + e[l];
			f[2][l][2] = f[0][l][2] + f[1][l][2];
			f[3][l][2] = f[2][l][2] + f[1][l][2];
			f[4][l][2] = f[3][l][2] + f[2][l][2];
			flag3[l] = 1;
		}
		l++;
	}
	for(int j=0;j<l;j++){
		if (flag1[j] == 1){
			printf("case one\n");
			for (int i = 0; i < 5; i++)
				printf("%d ", f[i][j][0]);
			printf("\n");
		}
			
		if (flag2[j] == 1){
			printf("case two\n");
			for (int i = 0; i < 5; i++)
				printf("%d ", f[i][j][1]);
			printf("\n");
		}
			
		if (flag3[j] == 1){
			printf("case three\n");
			for (int i = 0; i < 5; i++)
				printf("%d ", f[i][j][2]);
			printf("\n");
		}
			
	}
		
	return 0;
}
