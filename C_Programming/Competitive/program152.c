/*
    Write a program which accepts a string from the user and converts it into uppercase.
    Input : marvellous multi os
    Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>
#include<stdlib.h>

void strluprx(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'a' && *str <= 'z')
      {
         *str = *str - 32;
      }

      str++;
   }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    strlwx(arr);

    printf("modified string is %s",arr);

    return 0;
}