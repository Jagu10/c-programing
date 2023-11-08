#include<stdio.h>
struct book{
	char title[50];
	char author[50];
	char publication[50];
	float price;
  };
  void main(){
  	struct book b;
  	int i;
  	for(i=1;i<3;i++){
  		printf("Enter the detalis of work %d\n",i);
  		printf("title:");
  		scanf("%s",b.title);
  		printf("author:");
  		scanf("%s",b.author);
  		printf("publication:");
  		scanf("%s",b.publication);
  		printf("price:");
  		scanf("%f",&b.price);
	  }
	  printf("\n displying the details of all books\n");
	  for(i=1;i<3;i++){
	 // printf("\nbook %d :\n",i);
	  printf("title :%s\n",b.title);
	   printf("author :%s\n",b.author);
	    printf("publication :%s\n",b.publication);
	     printf("price:%s\n",b.price);
	 }
	 
  }
