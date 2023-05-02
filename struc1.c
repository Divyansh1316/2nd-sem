// 1. WAP to define, assign, read and display : book details, student information.
// 2. WAP to compare two dates entered by the user, make a structure namedate to store the elements day, month, year to store the dates. If the dates are equal, display the message "Dates are equal" otherwise display "dates are not equal".
// 3. WAP to find total and average of sales of all employess using array of structures.
// 4. WAP to read a set of name, roll no., date of birth and date of admission of the student from the keyboard where the date of birth and date of admission consist of 3 members such as day, month and year as a separate structure. (DOA DOB as 2 variables).
// 5. WAP to send the entire data of a structure to a function.
#include<stdio.h>

struct books
{
	char bname[20];
	char author[20];
	int price;
};

struct info
{
	char sname[20];
	char sec;	
	int rno;
};

void main()
{
	int i;
	struct books b[5];
	for(i=0; i<2; i++)
	{
		printf("Enter details of book %d : ",i+1);
		printf("Enter book name : ");
		gets(b[i].bname);
		printf("Enter author name : ");
		gets(b[i].author);
		printf("Enter book price : ");
		scanf("%d",&b[i].price);
		getchar();
	}
	struct info s[5];
	for(i=0; i<2; i++)
	{
		printf("Enter details of student %d: ",i+1);
		printf("Enter name : ");
		gets(s[i].sname);
		printf("Enter section : ");
		s[i].sec=getchar();
		printf("Enter roll no : ");
		scanf("%d",&s[i].rno);
		getchar();
	}
	printf("\nBook details : \n");
	for(i=0;i<2;i++)
	{
		printf("%s %s %d\n",b[i].bname,b[i].author,b[i].price);
	}
	printf("Student details :\n");
	for(i=0;i<2;i++)
	{
		printf("%s %c %d\n",s[i].sname,s[i].sec,s[i].rno);
	}
}
