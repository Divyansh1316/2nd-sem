/* 2. WAP TO CHECK IF 2 STRINGS ARE ANAGRAM. */

#include<stdio.h>
#include<string.h>
void main()
{
	int l1,l2,i,j,flag=0;
	char str1[50],str2[50],t1,t2;
	printf("Enter 1st string : ");
	gets(str1);
	l1=strlen(str1);
	printf("Enter 2nd string : ");
	gets(str2);
	l2=strlen(str2);
	if (l1==l2)
	{
		for (i=0;i<l1;i++)
		{
			for (j=i+1;j<l1;j++){
				if(str1[i]>str1[j])
				{
					t1=str1[i];
					str1[i]=str1[j];
					str1[j]=t1;			
				}
				if(str2[i]>str2[j])
				{
					t2=str2[i];
					str2[i]=str2[j];
					str2[j]=t2;			
				}
			}
		}
		puts(str1);
		puts(str2);
		for(i=0;i<l1;i++){
			if(str1[i]==str2[i])
			{
				flag++;
			}
		}
		if(flag==l1)
		{
			printf("Anagram");
		}
		else
		{
			printf("Not Anagram");
		}
	
	}	
	else
	{
		printf("Not Anagram");
	}
}
