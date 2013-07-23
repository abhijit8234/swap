#include<stdio.h>


void swap(int *a ,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

void main()
{
	int a=10, b=20;

	swap(&a,&b);

	printf("a=%d and b=%d", a,b);
	printf("eof = %d",EOF);
}
