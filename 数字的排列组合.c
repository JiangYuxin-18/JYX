#include <string.h>
#include <stdio.h>

/*递归函数，由循环和递归两部分组成
  将数组b抽象等价为数组c（只由0和1组成）
  数组c元素为0代表对应数组b该位置的元素还未使用过
  数组c元素为1代表对应数组b该位置的元素已经使用过
  在for循环中进行遍历，将未用过的元素输出出来，用过的则跳过
*/  
void Subset(int list[], int tag[], int n, int len) {
	if (n == len) {
		printf("--> ");
		for (int i = 0; i < len; i++) {
			if (tag[i] == 0)  //判断list【i】是否使用过
				printf("%d ", list[i]);
		}
		printf("\n");
		return;
	}
	tag[n] = 0;  //将其标记为已经使用过
	Subset(list, tag, n + 1, len);  //n+1即为函数中的int n
	tag[n] = 1;  //将其标记为未使用过
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
