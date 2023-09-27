#include<stdio.h>
void main(){
	float a,b;
    int c;
	//float d;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	printf("Enter 1=add,2=sub,3=mui,4=div:");
	scanf("%d",&c);
	switch(c){
		case 1 :printf("Add=%f",a+b);
		         break;
		case 2 :printf("sub=%f",a-b);
		         break;
		case 3 :printf("mui=%f",a*b);
		         break;
		case 4 :printf("div=%f",a/b);
		         break;
		default:printf("invalid value");
		        break;
	}
}
