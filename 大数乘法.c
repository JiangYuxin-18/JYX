//�����˷�
#include <stdio.h>
#include <math.h>
#include <string.h>
#define M 1000
char s1[M], s2[M], s[M];
int a[100][M], b[100][M], c[100][M];

int main() {
	int B;  //���������
	int h, i, j, m, n; //m��nΪ�ַ���s1��s2����
	int k[100];  //��ÿһ��m+n����������
	scanf("%d", &B);
	memset(c, 0, sizeof(c));  //������c��Ԫ��ȫ����ʼ��Ϊ0��û�д˲���Ҳ����(��Ϊ����c��ʱΪȫ�ֱ���������Ԫ���Ѿ��Զ���ʼ��Ϊ0)
	for (h = 0; h < B; h++) {
		scanf("%s%s", s1, s2);
		n = strlen(s1);
		m = strlen(s2);
		k[h] = n + m;	//��֤��˺��λ���������k��h��
		//���ַ���s1��s2��������������
		for (i = 0; i < n; i++)
			a[h][i] = s1[n - i - 1] - '0';  //��ʽת����0Ϊint�ͣ�4�ֽڣ���s[i]Ϊchar��(1�ֽ�)��������ת��Ϊint��
		for (i = 0; i < m; i++)
			b[h][i] = s2[m - 1 - i] - '0';
		//������
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				c[h][i + j] += a[h][i] * b[h][j];
		//��λ
		for (i = 0; i <= k[h]; i++) {
			if (c[h][i] >= 10) {
				c[h][i + 1] += c[h][i] / 10;
				c[h][i] %= 10;
			}
		}
	}
	for (h = 0; h < B; h++) {
		//��ȥ�����0�����޴˲��裬�����20*3�Ľ��Ϊ060�����20*6�Ľ��Ϊ120��
		i = k[h];
		while (c[h][i] == 0)
			i--;
		//�����ӡc[][]
		while (i >= 0)
			printf("%d", c[h][i]), i--;
		printf("\n");
	}
	return 0;
}