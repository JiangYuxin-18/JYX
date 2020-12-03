#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j, flag;
	scanf("%d", &n);
	char a[10][100];
	for (i = 0; i < n; i++) {
		scanf("%s", &a[i]);
		if (a[i][0] == 'S' && a[i][1] == 'C' && a[i][2] == 'U' && a[i][3] == 0)
			flag = 1;
		else {
			for (j = 0; a[i][j] != '\0'; j++) {
				if (a[i][j] == 'S') {
					if (a[i][j + 1] == 'C' && a[i][j + 2] == 'U') {
						j = j + 2;
						continue;
					} else {
						flag = 0;
						break;
					}
				} else {
					if (a[i][j] == 'A') {
						flag = 1;
						continue;
					} else {
						flag = 0;
						break;
					}
				}
			}
		}
		if (flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}