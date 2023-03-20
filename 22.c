/* 3. WAP to use call by reference and swap two number without using temp variables. */

#include <stdio.h>
void swap(int,int);
void main()
{
	int x,y;
	printf("Enter 2 numbers : ");
	scanf("%i %i",&x,&y);
	swap(x,y);
	printf("%i %i",x,y);
}
void swap (int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
