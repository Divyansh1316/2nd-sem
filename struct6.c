/* 2. Write a structure to store the name, account number and balance of customers (more than 5)
a. WAf to print the names of all the customers having balance less than Rs 200
b. waf to add rs 100 in balance of all the customers having more than Rs 1000 in their balance and then print the incremented value of their balance. */

#include<stdio.h>
struct emp
{
	char name[20];
	int acc;
	int bal;
};

void func1(struct emp *p)
{	
	printf("\nPart 1 : \n");
	for(int i=0;i<5;i++)
	{
		if((p+i)->bal<200)
		printf("%s\n",(p+i)->name);
	}
}

void func2(struct emp *p)
{	
	printf("\nPart 2 : \n");
	for(int i=0;i<5;i++)
	{
		if((p+i)->bal>1000)
		{
			(p+i)->bal=(p+i)->bal+100;
			printf("%s : %d\n",(p+i)->name,(p+i)->bal);
		}
	}
}

void main()
{
	struct emp s[5],*p;
	p=s;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter details of employee %d\n",i+1);
		printf("Enter name : ");
		gets(s[i].name);
		printf("Enter account no. : ");
		scanf("%d",&s[i].acc);
		printf("Enter balance : ");
		scanf("%d",&s[i].bal);
		getchar();
	}
	func1(p);
	func2(p);
}
