/* 1. WAP to find smallest element of an array using pointers. */

#include <stdio.h>
void main()
{
	int arr[50],min,i,s,*p;
	printf("Enter size of array : ");
	scanf("%i",&s);
	for (i=0;i<s;i++)
	{
		printf("Enter %i element : ",i+1);
		scanf("%i",&arr[i]);	
	}
	p=arr;
	min=arr[0];
	for (i=0;i<s;i++)
	{	
		if (min>*(p+i))
		{
			min=*(p+i);
		}
	}
	printf("%i",min);
}
