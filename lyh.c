#include <stdio.h>
#include <string.h>

int main() {
	struct student {
		char name[11];
		char id[19];
		int grade;
	} A[1000], *p = A;
	int n, b = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++, p++) {
		char R[5];
		p->grade = -1;
		scanf("%s %s %d", &p->name, &p->id, &p->grade);
		if (p->grade == -1) {
			gets(R);
		}
		if (p ->grade != -1) {
			b++;
		}
	}
	if (b != 0) {
		int min = 100, max = 0, i = 0, a = 0;
		p = A;
		for (int j = 0; j < n; j++, p++) {
			if (p->grade == -1)
				continue;
			if (p->grade > max) {
				max = p->grade;
				a = j;
			}
			if (p->grade == max && strcmp(p->name, A[a].name) <= 0) {
				max = p->grade;
				a = j;
			}
			if (p->grade < min) {
				min = p->grade;
				i = j;
			}
			if (p->grade == min && strcmp(p->name, A[i].name) >= 0) {
				min = p->grade;
				i = j;
			}
		}
		printf("%s %s\n", A[a].name, A[a].id);
		printf("%s %s\n", A[i].name, A[i].id);
	}
	return 0;
}
