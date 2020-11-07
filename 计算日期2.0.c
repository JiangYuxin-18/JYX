#include <stdio.h>

int main(void)
{
	int m, d, y, w;
	printf("Enter date (month/day/year):");
	scanf("%d/%d/%d",&m, &d, &y);
	
	if(d <= 0 || d > 31 || m <= 0 || m > 12){
		printf("Error\a");
	    return 0;
	}
	
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(d>=32){
				printf("Error\a"); 
				return 0;
			}
        break;
        
		case 4: case 6: case 9: case 11:
		    if(d>=31){
		    	printf("Error\a"); 
				return 0; 
			} 	
        break;
        
		case 2:
			if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
			    if(d>=30){
				     	printf("Error\a");
		  		    	return 0;
			    	}
       }
			else if(d>=29){
				printf("Error\a");
			    return 0;
			}
        break;
			
	}
	printf("Dated this %d",d);
	
	switch(d){
		case 1: case 21: case 31:
			printf("st");           break;
		case 2: case 22:
			printf("nd");           break;
		case 3: case 23:
		    printf("rd");           break;
		default: printf("th");      break; 
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


