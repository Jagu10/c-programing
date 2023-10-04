#include<stdio.h>
void main(){
	int i,j,n=5,temp=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(temp%2==0){
			printf("0");	
			}
			else{
				printf("1");
			}
			temp++;
		}
		printf("\n");
	}
}
