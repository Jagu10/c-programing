#include<stdio.h>
void main(){
	float no1,no2,no3;
	printf("Enter three no:");
	scanf("%f %f %f",&no1,&no2,&no3);
	float largest=no1;
	float secondlargest=no2;
	if(no2<no3)
	{
		secondlargest=no3;
	}
	if(no1<no2)
	{
		largest=no2;
		secondlargest=no1;
	}
	if(no1<no3)
	{
		largest=no3;
	}
	printf("The second largest number is %f",secondlargest);
}
