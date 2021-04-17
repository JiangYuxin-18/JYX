#include <iostream>
using namespace std;

class Date{
	public:
		Date(int year = 1990, int month = 1, int day = 1);
		void setDate(int year, int month, int day);
		void setYear(int year);
		int getYear();
		void setMonth(int month);
		int getMonth();
		void setDay(int day);
		int getDay();
		int getSeparator();
		void printfFullYear();
		void printfStandardYear();
		int fullYearsTo(int year, int month, int day);
		int daysTo(int y, int m, int d);
	private:
		int y;
		int m;
		int d;
		char separator = '-';
}; 

Date::Date(int year , int month , int day) {
	y = year;
	m = month;
	d = day;
}

void Date::setYear(int year){
   if(year>12||year<1) 
   year=1;
   y=year;
}

int Date::getYear(){
	return y;
}

void Date::setMonth(int month){
	m = month;
}

int Date::getMonth(){
	return m;
}

void Date::setDay(int day){
	d = day;
}

int Date::getDay(){
	return d;
}

int Date::getSeparator(){
	return separator;
}

void Date::printfFullYear(){
	cout << y << separator << m << separator << d << endl;
}

void Date::printfStandardYear(){
	cout << y % 100 << separator << m << separator << d << endl;

}

int Date::fullYearsTo(int year, int month, int day) {
	int temp;
	if (month > m) {
		return temp = year - y;
	}
	else if (month == m) {
		if (day >= d)
			return temp = year - y;
		else
			return temp = year - y - 1;
	}
	else
		return temp = year - y - 1;
}


int isleap(int year){
	
	if(year % 400 == 0)  /* 是400的倍数，就是闰年 */
		return 1;
	else if(year % 100 == 0)    /* 不是400的倍数，但是它是100的倍数，就是平年 */
		return 0;
	else if(year % 4 == 0)      /* 不是100的倍数，但是4的倍数，也是闰年 */
		return 1;
}


int daysTo(Date date,Date date1){
	
	int m, d, y, w, n;
	int starTime ;
	
	int y1=date1.getYear();
	int m1=date1.getMonth();
	int d1=date1.getDay();
	
	y = date.getYear();
	m = date.getMonth();
	d = date.getDay();
	
	
	int N = 0;
	static int days[2][13] = {
		365, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
		366, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
	};
	
	
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
	return 0;
}

int main(){
	Date birthDate(1969,8,11);
	birthDate.printfFullYear();
	birthDate.printfStandardYear();
	cout << birthDate.fullYearsTo(2010,4,15);
	cout << birthDate.daysTo(2010,4,15) << endl;
	cout << birthDate.daysTo(1949,10,1) << endl;
}
