#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	struct student {
		char name[11];
		char id[19];
		int grade;
		int rank;
	} A[1000], T;
	
	int length, n, flag=0;
	char str[20], str1[20];
	
	scanf("%d %s", &n, str);
	length = strlen(str);
	
	for (int i = 0; i < n; i++) {
		char Absent[4];
		A[i].grade = -1;
		scanf("%s %s %d", A[i].name, A[i].id, &A[i].grade);
		if (A[i].grade == -1) {
		scanf("%s",Absent);
		} 
	}
	
	for (int a = 0; a < n; a++) {
		for (int b = a; b < n; b++) {
			if (A[a].grade < A[b].grade) {
				T = A[a];
				A[a] = A[b];
				A[b] = T;
			}
		}
	}
	
	for (int a = 0; a < n; a++) {
		A[a].rank = a + 1;
		if (A[a].grade == A[a + 1].grade) {
			A[a + 1].rank = A[a].rank;
			a++;
		}
	}
	
	for (int i = 0; i < n; i++){
		flag=0;
		for (int j = 0; j < 10; j++) {
			for (int k = 0, m = j; k < length; k++, m++){
				str1[k] = A[i].name[m];
			}
			if (strcmp(str, str1) == 0) {
				printf("%s %s ", A[i].name, A[i].id);
				if (A[i].grade == -1)
					printf("n/a n/a\n");
				else
					printf("%d %d\n", A[i].grade, A[i].rank);
				flag=1;
				break;
			}
		}
		if(flag==0){
			for (int j = 0; j < 18; j++) {
				for (int k = 0, m = j; k < length; k++, m++)
					str1[k] = A[i].id[m];
				if (strcmp(str, str1) == 0) {
					printf("%s %s ", A[i].name, A[i].id);
					if (A[i].grade == -1)
						printf("n/a n/a\n");
					else
						printf("%d %d\n", A[i].grade, A[i].rank);
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
				if((str[0]=='n'||str[0]=='a')&&length==1)
					if(A[i].grade==-1) {
						printf("%s %s n/a n/a\n", A[i].name, A[i].id);
						flag=1;
					}
			else {
				if (atoi(str) == A[i].grade){
					printf("%s %s %d %d\n", A[i].name, A[i].id, A[i].grade, A[i].rank);
					flag=1;
				}
			}
		}
		
		
	}
			
	
	
	return 0;
}
