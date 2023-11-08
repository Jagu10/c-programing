#include <stdio.h>
struct student{
	char name[50];
   int age;
   double pr;
  };
  void main(){
  	struct student s;
  	int i;
  	for(i=1;i<5;i++){
  		printf("Enter the detalis of student %d\n",i);
  		printf("name:");
  		scanf("%s",s.name);
  		printf("age:");
  		scanf("%d",&s.age);
  		printf("pr:");
  		scanf("%lf",&s.pr);
	  }
	  printf("\n displying the details of the student\n");
	  for(i=1;i<=5;i++){
	  printf("\nstudent %d :\n",i);
	  printf("name :%s\n",s.name);
	   printf("ag :%d\n",s.age);
	    printf("pr:%lf\n",s.pr);
	    
	 }
	 
  }
