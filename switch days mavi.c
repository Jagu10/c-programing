#include<stdio.h>
void main(){
	int monthnum;
	printf("Enter a month num(1to12)");
	scanf("%d",&monthnum);
	switch(monthnum){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");
			break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30 days");
				break;
				case 2:
				printf("28or29 days(depending on leap year)");
				break;
				default:
					printf("invalid month is not allowed (1to12)");
					
			
	}
}
