#include<stdio.h>
void main(){
	int a;
	printf("enter a:");
	scanf("%d",&a);
	if(a>=1&&a<=12){
	
	switch(a){
		case 2:printf("28 days");
		       break;
		case 4:printf("30 days");
		        break;
		case 6:printf("30 days");
		        break;
		case 10:printf("30 days");
		        break;
		case 12:printf("30 days");
		        break;
	    default:printf("30 days");
	            break;
	}
}else{
	printf("invalid num");
}
}
