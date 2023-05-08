/* 1. WAP to store roll number , name age(11-14) and address of the students(more than 5)
a. waf to print the names of all students having age 14
b. WAF to print names of all students having even roll number
c. WAF to display the detials of the students whose roll number is entered by the user */

/* 2. Write a structure to store the name, account number and balance of customers (more than 5)
a. WAf to print the names of all the customers having balance less than Rs 200
b. waf to add rs 100 in balance of all the customers having more than Rs 1000 in their balance and then print the incremented value of their balance. */

/* 3. Write a structure to store the name, salary and hours of work per day of 5 employees in a company.
a. WAP to increase the salary depending upon the number of hours of the work per day as follows and then print the name of all the employees along with their final salary. (2 coloumns for : hours of work : 8,10,<==12/ per day increasing salary add rs 50,100,150 ) 

hour of work	|	Increasing salary
	8	|		+50
<=10 and >=12	|		+100
	<=12	|		+150
*/
#include<stdio.h>
struct student
{
	char name[20];
	int rno;
	int age;
	char address[20];
};

void func1(struct student *p)
{	
	printf("\nPart 1 : \n");
	for(int i=0;i<5;i++)
	{
		if((p+i)->age==14)
		printf("%s\n",(p+i)->name);
	}
}

void func2(struct student *p)
{	
	printf("\nPart 2 : \n");
	for(int i=0;i<5;i++)
	{
		if((p+i)->rno%2==0)
		printf("%s\n",(p+i)->name);
	}
}

void func3(struct student *p)
{	
	printf("\nPart 3 : \n");
	int a;
	printf("Enter roll number : ");
	scanf("%d",&a);
	for(int i=0;i<5;i++)
	{
		if((p+i)->rno==a)
		printf("%s\n%d\n%d\n%s\n",(p+i)->name,(p+i)->rno,(p+i)->age,(p+i)->address);
	}
}

void main()
{
	struct student s[5],*p;
	p=s;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter details of student %d\n",i+1);
		printf("Enter name : ");
		gets(s[i].name);
		printf("Enter rno : ");
		scanf("%d",&s[i].rno);
		printf("Enter age (11-14) : ");
		scanf("%d",&s[i].age);
		getchar();
		printf("Enter address : ");
		gets(s[i].address);
	}
	func1(p);
	func2(p);
	func3(p);
}
