/* 4. WAP to pass an array to a function pass 2 array into funtion and add them (same size). */

#include<stdio.h>
void func(int *, int *, int *,int );
void main()
{
	int arr1[50],arr2[50],arr3[50],i,n,*p,*q,*r;
	printf("Enter size of both array : ");
	scanf("%i",&n);
	p=arr1;
	q=arr2;
	for (i=0;i<n;i++)
	{
		printf("Enter %i element : ",i+1);
		scanf("%i",p+i);
	}
	printf("Enter 2nd array : \n");
	for (i=0;i<n;i++)
	{
		printf("Enter %i element : ",i+1);
		scanf("%i",q+i);
	}
	func(arr1,arr2,arr3,n);
	
}

void func(int *p, int *q,int *r, int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		*(r+i)=*(p+i)+*(q+i);
	}
	for (i=0;i<n;i++)
	{
		printf("%i",*(r+i));
	}
		
}
