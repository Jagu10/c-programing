#include<stdio.h>
void main()
{
	int x=0,y=0;
	printf("enter value of variable x,y:");
	scanf("%d %d",&x,&y);
	int *ptr=&x;
	int *ptr2=&y;
	printf("value of x,y:%d %d\n",*ptr,*ptr2);
	printf("address of x,y:%d %d\n",*ptr,*ptr2);
}
