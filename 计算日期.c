#include <stdio.h>

int main(void)
{
	int m, d, y, w;
	printf("Enter date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&m, &d, &y);
	
	printf("Dated this %d",d);
	
	switch(d){
		case 1: case 21: case 31:
			printf("st");break;
		case 2: case 22:
			printf("nd");break;
		case 3: case 23:
		    printf("rd");break;
		default: printf("th");break; 
	}
	printf(" day of ");
	
	switch (m){
		case 1: printf("January");  break;
		case 2: printf("February"); break;
		case 3: printf("March");    break;
		case 4: printf("Apirl");    break;
		case 5: printf("May");      break;
		case 6: printf("June");     break;
		case 7: printf("July");     break;
		case 8: printf("August");   break;
		case 9: printf("September");break;
		case 10:printf("October");  break;
		case 11:printf("November"); break;
		case 12:printf("December"); break;
	}
	
	printf(", %.4d.\n",y);
	if(m==1||m==2){
		m+=12;
		y--;
	}
	w = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
	switch (w){
		case 6: printf("星期六");   break;  
		case 5: printf("星期五");   break; 
		case 4: printf("星期四");   break; 
		case 3: printf("星期三");   break; 
		case 2: printf("星期二");   break;
		case 1: printf("星期一");   break;
		case 0: printf("星期日");   break; 
		        
		 
	}
    return 0;
}
