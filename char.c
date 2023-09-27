#include<stdio.h>
 int main(){
	char a,e,i,o,u,character;
	printf("Enter character:");
	scanf("%c",&character);
	if(character=='A'||character=='E'||character=='I'||character=='O'||character=='U'){
		printf("character is vowl");
	}else{
		printf("character is consonat");
	}
}
