/* 5. WAP to input a string="Aman singh rawat" and print ASRawat as output. */

#include <stdio.h>
#include <string.h>
void main()
{
    int i, l, j, flag;
    char str[50], rev[50];
    printf("Enter a string : ");
    gets(str);
    printf("\n");
    l = strlen(str);
    if (str[0] != ' ')
    {
        flag = 1;
        printf("%c", str[0]);
    }
    for (i = 0; i < l; i++)
    {
        if (str[i] != '\0')
        {
            if (str[i] == ' ' && str[i + 1] != ' ')
            {
                flag++;

                if (flag > 2)
                {
                    break;
                }
                printf("%c", str[i + 1]);
            }
        }
    }
    for (j = i + 1; j < l; j++)
    {
        printf("%c", str[j]);
    }
}
