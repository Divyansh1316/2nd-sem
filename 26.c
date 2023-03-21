/* 3. WAP to pass an array to a function sum of max and min element of the array */

#include<stdio.h>
void func(int *, int );
void main()
{
	int arr[50],i,n,*p;
	printf("Enter size of array : ");
	scanf("%i",&n);
	p=arr;
	for (i=0;i<n;i++)
	{
		printf("Enter %i element : ",i+1);
		scanf("%i",p+i);
	}
	func(arr,n);
	
}

void func(int *p, int n)
{
	int i,j,min,max;
	max=*p;
	min=*p;
	for (i=0;i<n;i++)
	{
		if (min>*(p+i))
		{
			min=*(p+i);
		}
		else if (max<*(p+i))
		{
			max=*(p+i);
		}
	}
	printf("Sum is : %i",min+max);
}
