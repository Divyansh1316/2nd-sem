// 3. WAP to find total and average of sales of all employess using array of structures.
#include<stdio.h>

struct emp
{
	char name[20];
	int sales;
};

void main()
{
	int i,t=0,a=0;
	struct emp e[5];
	for(i=0;i<2;i++)
	{
		printf("Enter details of %d employee : \n",i+1);
		printf("Enter name : ");
		gets(e[i].name);
		printf("Enter sales : ");
		scanf("%d",&e[i].sales);
		getchar();
	}
	for(i=0;i<2;i++)
	{
		t=t+e[i].sales;
		a=t/2;
	}
	printf("%d %d \n",t,a);
}
