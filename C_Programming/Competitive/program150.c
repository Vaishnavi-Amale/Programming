/*
        write a program which accept string from user and display it in reverse order

        Input : Marvellous

        output : s u o l l e v r a M
*/

#include<stdio.h>
#include <stdbool.h>

void Reverse(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(str >= start)
    {
        printf("%c", *str);
        str--;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    return 0;
}