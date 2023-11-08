#include<stdio.h>
struct example_struct{
	int a;
	int b;
	int c;
};
union example_union{
	int a;
	int b;
	int c;
};
void main(){

	struct example_struct s;
	union example_union u;
	printf("size of structure:%d  bytes\n",sizeof (s));
	printf("size of union:%ld bytes \n",sizeof (u));
}
