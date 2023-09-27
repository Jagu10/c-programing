#include<stdio.h>
void main(){
	int day;
	printf("Enter a day no(1to7)");
	scanf("%d",&day);
	switch(day){
		case 1: printf("sunday");
		break;
		case 2:printf("monday");
		break;
		case 3:printf("tuesday");
		break;
		case 4:printf("wensday");
		break;
		case 5:printf("thursday");
		break;
		case 6:printf("friday");
		break;
		case 7:printf("saturday");
		break;
		
	}
}
