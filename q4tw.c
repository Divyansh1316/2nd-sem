//Q4. termwork Memory allocation 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
	
	search(p, n);
	cube(p, n, i);
}
void search(int *p, int n)
{
	int i,k;
	printf("Enter element to be searched : ");
	scanf("%i",&k);
	for(i=0;i<n;i++)
	{
		if (*(p+i)==k)
		{
			printf("%i\n",i);
			
		}
	}
	return i;
	
}
void cube(int *p, int n, int i)
{	
	*(p+i)=(*(p+i))*(*(p+i))*(*(p+i));
	printf("%i",*(p+i));
	
}
