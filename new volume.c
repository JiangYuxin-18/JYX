//computers the dimensional weight of a box from input provided by the user

#include <stdio.h>

int main(void)
{
	int height,length,width,volume,weight;
	
	printf("Enter height of box:");//如果在此处加入\n的话，运行结果里面的用户出入则在下一行。 
	scanf("%d",&height);
	printf("Enter length og box:");//不加入换行符的话，则在同一行输入。 
	scanf("%d",&length);
	printf("Enter width of box:");
	scanf("%d",&width);
	volume=height*length*width;
	weight=(volume+165)/166;
	
	printf("volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	
	return 0; 
} 
