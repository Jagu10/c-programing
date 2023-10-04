#include<stdio.h>
int main(){
	int i,j,n=5,m;
	char ch='A';
	for(i=1;i<=5;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j%2==0){
				if(i%2==0){
					printf("%c",ch++);
				}
				else{
					printf("%d",m++);
				}
			}
			printf("\n");
		}
	}
}
				

