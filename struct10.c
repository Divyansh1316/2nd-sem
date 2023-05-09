/*
1. WAP to create a structure train consists of structure memebers train name, train number, arrival and departure station, departure and arrival time, date of arrival and departure. DATE AND TIME
I. WAP to input details of 10 trains
a. print the details of all the trains which are departuring from a particular station.
b. print the details of all the trains which are arriving to a particular station.
c. print the details of all the trains which are running between 2 input stations.
*/

#include<stdio.h>
#include<string.h>
struct train
{
	char name[20];
	int no;
	char arrival[20];
	char departure[20];
	struct date
	{
		int day;
		int month;
		int year;	
	}arr_date, dep_date;
	
	struct time
	{
		int minutes;
		int hours;
	}arr_time, dep_time;
};

void main()
{
	struct train s[10];
	for(int i=0;i<2;i++)
	{
		printf("Enter details of train %d : \n",i+1);
		printf("Enter train name : ");
		gets(s[i].name);
		printf("Enter train number : ");
		scanf("%d",&s[i].no);
		getchar();
		printf("Enter departure station : ");
		gets(s[i].departure);
		printf("Enter arrival station : ");
		gets(s[i].arrival);
		printf("Enter departure time (H : M) : ");
		scanf("%d %d",&s[i].dep_time.hours, &s[i].dep_time.minutes);
		printf("Enter arrival time (H : M) : ");
		scanf("%d %d",&s[i].arr_time.hours, &s[i].arr_time.minutes);
		printf("Enter departure date : ");
		scanf("%d %d %d",&s[i].dep_date.day, &s[i].dep_date.month, &s[i].dep_date.year);
		printf("Enter arrival date : ");
		scanf("%d %d %d",&s[i].arr_date.day, &s[i].arr_date.month, &s[i].arr_date.year);
		getchar();
	}
	char st[20];
	printf("Enter departure station : ");
	gets(st);
	for(int i=0;i<2;i++)
	{
		if(!strcmp(s[i].departure,st))
		{
			printf("Details of train %d : \n",i+1);
			printf("Train name : %s\n",s[i].name);
			printf("Train number : %d\n",s[i].no);		
			printf("Departure station : %s\n",s[i].departure);
			printf("Arrival station : %s\n",s[i].arrival);
			printf("Departure time (H : M) : %d %d\n",s[i].dep_time.hours, s[i].dep_time.minutes);
			printf("Arrival time (H : M) : %d %d\n",s[i].arr_time.hours, s[i].arr_time.minutes);
			printf("Departure date (DD : MM : YY) : %d %d %d\n",s[i].dep_date.day, s[i].dep_date.month, s[i].dep_date.year);
			printf("Arrival date (DD : MM : YY) : %d %d %d\n",s[i].arr_date.day, s[i].arr_date.month, s[i].arr_date.year);
		}
	}
	char ar[20];
	printf("Enter arrival station : ");
	gets(ar);
	for(int i=0;i<2;i++)
	{
		if(!strcmp(s[i].arrival,ar))
		{
			printf("Details of train %d : \n",i+1);
			printf("Train name : %s\n",s[i].name);
			printf("Train number : %d\n",s[i].no);		
			printf("Departure station : %s\n",s[i].departure);
			printf("Arrival station : %s\n",s[i].arrival);
			printf("Departure time (H : M) : %d %d\n",s[i].dep_time.hours, s[i].dep_time.minutes);
			printf("Arrival time (H : M) : %d %d\n",s[i].arr_time.hours, s[i].arr_time.minutes);
			printf("Departure date (DD : MM : YY) : %d %d %d\n",s[i].dep_date.day, s[i].dep_date.month, s[i].dep_date.year);
			printf("Arrival date (DD : MM : YY) : %d %d %d\n",s[i].arr_date.day, s[i].arr_date.month, s[i].arr_date.year);
		}
	}
	char arr[20],depp[20];
	printf("Enter departure station : ");
	gets(arr);
	gets(depp);
	for(int i=0;i<2;i++)
	{
		if(!strcmp(s[i].arrival,arr) && !strcmp(s[i].departure,depp))
		{
			printf("Details of train %d : \n",i+1);
			printf("Train name : %s\n",s[i].name);
			printf("Train number : %d\n",s[i].no);		
			printf("Departure station : %s\n",s[i].departure);
			printf("Arrival station : %s\n",s[i].arrival);
			printf("Departure time (H : M) : %d %d\n",s[i].dep_time.hours, s[i].dep_time.minutes);
			printf("Arrival time (H : M) : %d %d\n",s[i].arr_time.hours, s[i].arr_time.minutes);
			printf("Departure date (DD : MM : YY) : %d %d %d\n",s[i].dep_date.day, s[i].dep_date.month, s[i].dep_date.year);
			printf("Arrival date (DD : MM : YY) : %d %d %d\n",s[i].arr_date.day, s[i].arr_date.month, s[i].arr_date.year);
		}
	}
}
