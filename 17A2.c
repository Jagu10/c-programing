#include<stdio.h>
void main()
{
	int num1=10,num=20,sum;
	int *ptr=&num1;
	int *ptr2=&num2;
	sum=*ptr+*ptr2;
	printf("sum of %d and %d is: %d\n",*ptr,*ptr2,sum);
}
