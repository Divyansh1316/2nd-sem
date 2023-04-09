// memory allocate ,even odd, + - ,reverse, sort

#include<stdio.h>
#include<stdlib.h>
void evenodd(int *, int );
void posneg(int *, int );
void rev(int *, int );
void sort(int *, int );
void main()
{
	int n, *p, i;
	printf("Enter size : ");
	scanf("%i",&n);
	p= (int *)malloc(n*sizeof(int ));
	for(i=0;i<n;i++)
	{
		scanf("%i",p+i);
	}
	
	evenodd(p, n);
	posneg(p, n);
	rev(p, n);
	sort(p ,n);
}
void evenodd(int *p, int n)
{
	int i,even=0,odd=0;
	for(i=0;i<n;i++)
	{
		if (*(p+i)%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even elements are : %i \n",even);
	printf("Odd elements are : %i",odd);
	printf("\n");

}
void posneg(int *p, int n)
{
	int i,pos=0,neg=0;
	for(i=0;i<n;i++)
	{
		if (*(p+i)>0)
		{
			pos++;
		}
		else if (*(p+i)<0)
		{
			neg++;
		}
	}
	printf("Positive elements are : %i \n",pos);
	printf("Negative elements are : %i",neg);
	printf("\n");

}
void rev(int *p, int n)
{
    printf("Reversed array is : ");
	for (int i=0;i<n;i++)
	{
	printf("%i",*(p+n-i-1));
	}	
}
void sort(int *p, int n)
{	
	int i,j,t;
	for (i=0;i<n;i++)
	{	
		for (j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	printf("\nSorted array is : ");
	for (i=0;i<n;i++)
	{
		printf("%i",*(p+i));
	}
}
