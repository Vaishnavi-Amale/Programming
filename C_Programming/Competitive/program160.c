/*
    Write a program which accepts a string from the user and reverse that string in palce

    Input : abcd
    Output : dcba

    Input : abba
    Output : abba
*/

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
   char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

   StrRevX(arr);

   printf("Modified string is %s",arr);

    return 0;
}