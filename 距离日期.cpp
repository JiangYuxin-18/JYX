#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>		//����system��ͷ�ļ�

int isleap(int year){
	
	if(year % 400 == 0)  /* ��400�ı������������� */
		return 1;
	else if(year % 100 == 0)    /* ����400�ı�������������100�ı���������ƽ�� */
		return 0;
	else if(year % 4 == 0)      /* ����100�ı���������4�ı�����Ҳ������ */
		return 1;
}

int main()
{
	system("color f4");
	
	int m, d, y, w, n;
	int starTime ;
	
	int  y1=2020, m1=9, d1=16;
	int N = 0;
	static int days[2][13] = {
		365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
		366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
	};

	scanf("%d/%d/%d",&y, &m, &d);
	
	if(y1 + 1 < y){					/* ��һ���� + 1 ��С�ڵڶ����� */
		while(y1 + 1 < y){
			if(isleap(y1) == 1){		/* �������ֱ꣬�Ӽ�366 */
				N += 366;
				++y1;
			}else{						/* ����ƽ���365 */
				N += 365;
				++y1;
			}
		}
	}

	if(y1 + 1 == y){					/* ��һ����͵ڶ��������Ϊһ������2013��2014 */
		if(isleap(y1) == 1){
			N += (days[1][m1] - d1);	/* �Ƚ���һ������Ǹ��·ݼ��� */
			++m1;						/* ���·ݼӵ���һ���� */
			for(; m1 <= 12; ++m1)		/* �ٰ���һ����� */
				N += days[1][m1];
			++y1;
			m1 = 0;
		}else{
			N += (days[0][m1] - d1);
			++m1;
			for(; m1 <= 12; ++m1)
				N += days[0][m1];
			++y1;
			m1 = 0;
		}
	}

	if(y1 == y){
		if(isleap(y1) == 1){
			if(m1 == 0){
				for(m1 = 1; m1 < m; ++m1)
					N += days[1][m1];
				N += d;
			}else if(m1 != m){
				N += (days[1][m1] - d1);
				++m1;
				for(; m1 < m; ++m1)
					N += days[1][m1];
				N += d;
			}else{
				N = d - d1;
			}
		}else{
			if(m1 == 0){
				for(m1 = 1; m1 < m; ++m1)
					N += days[0][m1];
				N += d;
			}else if(m1 != m){
				N += (days[0][m1] - d1);
				++m1;
				for(; m1 < m; ++m1)
					N += days[0][m1];
				N += d;
			}else{
				N = d - d1;
			}
		}
	}
	
	printf("%d", N);
	return 0;
}