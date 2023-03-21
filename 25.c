/* 2. WAP to pass an array to a function and reverse that array */

#include<stdio.h>
void rev(int *, int );
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
	rev(arr,n);
	for (i=0;i<n;i++)
	{
		printf("%i",*(p+i));
	}
}

void rev(int *p, int n)
{
	int i,j,t;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;	
			}
		}
	}
}
