//大数乘法
#include <stdio.h>
#include <math.h>
#include <string.h>
#define M 1000
char s1[M], s2[M], s[M];
int a[100][M], b[100][M], c[100][M];

int main() {
	int B;  //输入的组数
	int h, i, j, m, n; //m、n为字符串s1、s2长度
	int k[100];  //将每一个m+n存入数组中
	scanf("%d", &B);
	memset(c, 0, sizeof(c));  //将数组c中元素全部初始化为0，没有此步骤也可以(因为数组c此时为全局变量，其中元素已经自动初始化为0)
	for (h = 0; h < B; h++) {
		scanf("%s%s", s1, s2);
		n = strlen(s1);
		m = strlen(s2);
		k[h] = n + m;	//保证相乘后的位数不会大于k【h】
		//把字符串s1和s2逆序用数字排列
		for (i = 0; i < n; i++)
			a[h][i] = s1[n - i - 1] - '0';  //隐式转化，0为int型（4字节），s[i]为char型(1字节)，故最终转化为int型
		for (i = 0; i < m; i++)
			b[h][i] = s2[m - 1 - i] - '0';
		//乘运算
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				c[h][i + j] += a[h][i] * b[h][j];
		//进位
		for (i = 0; i <= k[h]; i++) {
			if (c[h][i] >= 10) {
				c[h][i + 1] += c[h][i] / 10;
				c[h][i] %= 10;
			}
		}
	}
	for (h = 0; h < B; h++) {
		//除去多余的0，若无此步骤，则输出20*3的结果为060，输出20*6的结果为120；
		i = k[h];
		while (c[h][i] == 0)
			i--;
		//逆序打印c[][]
		while (i >= 0)
			printf("%d", c[h][i]), i--;
		printf("\n");
	}
	return 0;
}