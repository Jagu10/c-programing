#include<stdio.h>
void main(){
	int n,a,i,count=0,rem=0,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		n=n/10;
		count++;
	}
	n=a;
	while(n>0){
		rem=n%10;
		sum=sum+pow(rem,count);
		n=n/10;
	}
	if(sum==a){
		printf("yes");
	}
	else{
		printf("no");    
	}
}
