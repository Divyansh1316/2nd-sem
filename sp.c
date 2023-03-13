/* 1. WAP TO INPUT MULTIWORD STRING AND REMOVE ALL THE SPACES. */

#include<stdio.h>
#include<string.h>
void main()
{
	int l,i,j;
	char str[50];
	printf("Enter string : ");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if (str[i]==' ')
		{
			for(j=i;j<l;j++)
			{
				str[j]=str[j+1];
			}	
		}
	}
	puts(str);
}
