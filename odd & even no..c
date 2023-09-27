#include<stdio.h>
void main()
{
	int number;
	printf("enter an integer no:");
	scanf("%d",&number);
	int lastdigit=number%10;
	if(lastdigit%2==0)
	{ 
	printf("the lastdigit %d is even.",lastdigit);
	}
	else{
		printf("the lastdigit %d is odd.",lastdigit);
	}
}
