// 2. WAP to compare two dates entered by the user, make a structure namedate to store the elements day, month, year to store the dates. If the dates are equal, display the message "Dates are equal" otherwise display "dates are not equal".
#include<stdio.h>

struct namedate
{
	int day;
	int month;
	int year;
};

void main()
{
	int i;
	struct namedate a,b;
		printf("Enter details of 1st day : \n");
		printf("Enter day : ");
		scanf("%d",&a.day);
		printf("Enter month : ");
		scanf("%d",&a.month);
		printf("Enter year : ");
		scanf("%d",&a.year);
		printf("\nEnter details of 2nd day : ");
		printf("Enter day : ");
		scanf("%d",&b.day);
		printf("Enter month : ");
		scanf("%d",&b.month);
		printf("Enter year : ");
		scanf("%d",&b.year);
		
	if(a.day==b.day && a.month==b.month && a.year==b.year)
	{
		printf("Dates are equal");
	}
	else
	{
		printf("Dates are not equal");
	}
}
