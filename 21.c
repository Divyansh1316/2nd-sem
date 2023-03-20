/* 2. WAP to read an array of integers and print its element in reverse order using pointers. */

#include <stdio.h>
void main()
{
	int arr[50],min,i,s,*p;
	printf("Enter size of array : ");
	scanf("%i",&s);
	p=arr;
	for (i=0;i<s;i++)
	{
		printf("Enter %i element : ",i+1);
		scanf("%i",p+i);	
	}
	for (i=0;i<s;i++)
	{
		printf("%i",*(p+s-1-i));	
	}
}
