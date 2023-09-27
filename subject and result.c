#include<stdio.h>
void main()
{
	int marks[5];
	int totalmarks=0 ,a,b,c,d,e;
	printf("enter mark for the five subjects:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	totalmarks=a=a+b+c+d+e;
    float perctange=(float)totalmarks/5;
    printf("perctange: %f",perctange);
    if(perctange<35)
    {
    	printf("class:fail");
	}
	else if(perctange>36 && perctange<=45)
	{
		printf("class:pass");
	}
	else if(perctange>=46 && perctange<=60)
	{
		printf("class:second");
	}
	else if(perctange>=61 && perctange<=70)
	{
		printf("class:first");
	}
	else
	{
		printf("class:distinction");
	}
}
