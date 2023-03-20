/* 4. WAP to input in an array then perform sorting operation using pointers. */

#include <stdio.h>
void main()
{
	int arr[50],min,i,j,s,*p,t;
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
		for (j=i+1;j<s;j++)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;	
			}
		}
	}
	for (i=0;i<s;i++)
	{
		printf("%i",*(p+i));
	}
}
