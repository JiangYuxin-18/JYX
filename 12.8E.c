#include <string.h>
#include <stdio.h>

/*�ݹ麯������ѭ���͵ݹ����������
  ������b����ȼ�Ϊ����c��ֻ��0��1��ɣ�
  ����cԪ��Ϊ0�����Ӧ����b��λ�õ�Ԫ�ػ�δʹ�ù�
  ����cԪ��Ϊ1�����Ӧ����b��λ�õ�Ԫ���Ѿ�ʹ�ù�
  ��forѭ���н��б�������δ�ù���Ԫ������������ù���������
*/  
void Subset(int list[], int tag[], int n, int len) {
	if (n == len) {
		printf("--> ");
		for (int i = 0; i < len; i++) {
			if (tag[i] == 0)  //�ж�list��i���Ƿ�ʹ�ù�
				printf("%d ", list[i]);
		}
		printf("\n");
		return;
	}
	tag[n] = 0;  //������Ϊ�Ѿ�ʹ�ù�
	Subset(list, tag, n + 1, len);  //n+1��Ϊ�����е�int n
	tag[n] = 1;  //������Ϊδʹ�ù�
	Subset(list, tag, n + 1, len);
}

int main() {
	int m;
	scanf("%d", &m);
	for(int j = 0; j < m; j++){
	int n;
	scanf("%d", &n);
	int b[100], c[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	Subset(b, c, 0, n);
	}
	return 0;
}
