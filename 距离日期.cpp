#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>		//包含system的头文件

int isleap(int year){
	
	if(year % 400 == 0)  /* 是400的倍数，就是闰年 */
		return 1;
	else if(year % 100 == 0)    /* 不是400的倍数，但是它是100的倍数，就是平年 */
		return 0;
	else if(year % 4 == 0)      /* 不是100的倍数，但是4的倍数，也是闰年 */
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
	
	if(y1 + 1 < y){					/* 第一个年 + 1 后还小于第二个年 */
		while(y1 + 1 < y){
			if(isleap(y1) == 1){		/* 若是闰年，直接加366 */
				N += 366;
				++y1;
			}else{						/* 若是平年加365 */
				N += 365;
				++y1;
			}
		}
	}

	if(y1 + 1 == y){					/* 第一个年和第二个年相差为一，比如2013和2014 */
		if(isleap(y1) == 1){
			N += (days[1][m1] - d1);	/* 先将第一个年的那个月份加满 */
			++m1;						/* 将月份加到下一个月 */
			for(; m1 <= 12; ++m1)		/* 再把这一年加满 */
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