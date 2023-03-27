//Q4. termwork Memory allocation 

#include<stdio.h>
#include<stdlib.h>


void main()
{
	int t, q, n, *p, i;
	printf("Enter size : ");
	scanf("%i",&n);
	p= (int *)malloc(n*sizeof(int ));
	for(i=0;i<n;i++)
	{
		scanf("%i",p+i);
	}
	
	t=search(p, n);
	cube(p, n, t);
	for(i=0;i<n;i++)
	{
		printf("%i",*(p+i));
	}
}
int search(int *p, int n)
{
	int i,k;
	printf("Enter element to be searched : ");
	scanf("%i",&k);
	for(i=0;i<n;i++)
	{
		if (*(p+i)==k)
		{
			
			return i;
		}
	}
	
	
}
void cube(int *p, int n, int i)
{	
	*(p+i)=(*(p+i))*(*(p+i))*(*(p+i));
	
	
}
