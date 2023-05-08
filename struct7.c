/* 3. Write a structure to store the name, salary and hours of work per day of 5 employees in a company.
a. WAP to increase the salary depending upon the number of hours of the work per day as follows and then print the name of all the employees along with their final salary. (2 coloumns for : hours of work : 8,10,<==12/ per day increasing salary add rs 50,100,150 ) 

hour of work	|	Increasing salary
	8	|		+50
<=10 and >=12	|		+100
	<=12	|		+150
*/

#include<stdio.h>
struct emp
{
	char name[20];
	int salary;
	int hours;
};

void func1(struct emp *p)
{	
	printf("\nPart 2 : \n");
	for(int i=0;i<5;i++)
	{
		if((p+i)->hours>=8 && (p+i)->hours<10)
		{
			(p+i)->salary=(p+i)->salary+50;
			printf("%s : %d\n",(p+i)->name,(p+i)->salary);
		}
		else if((p+i)->hours>=10 && (p+i)->hours<12)
		{
			(p+i)->salary=(p+i)->salary+100;
			printf("%s : %d\n",(p+i)->name,(p+i)->salary);
		}
		else if((p+i)->hours>=12)
		{
			(p+i)->salary=(p+i)->salary+150;
			printf("%s : %d\n",(p+i)->name,(p+i)->salary);
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
		printf("Enter salary : ");
		scanf("%d",&s[i].salary);
		printf("Enter hours : ");
		scanf("%d",&s[i].hours);
		getchar();
	}
	func1(p);
}
