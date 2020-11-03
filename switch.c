#include <stdio.h>
int main()
{
	int x, grade;
	printf("Enter a grade:");
	scanf("%d",&x);
	grade = x;
    switch (grade) {
	  case 4:
	  case 3:
	  case 2:
	  case 1:  printf("Passing");
	           break;
	  case 0:  printf("Failing");
	           break;
	  default: printf("Illegal grade");
	           break;
	}
}
