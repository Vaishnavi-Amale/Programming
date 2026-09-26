/*
    Write a program which accepts a string from the user and converts it into lowercase.
    Input : Marvellous Multi OS 
    Output : marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>

void strlwx(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'A' && *str <= 'Z')
      {
         *str = *str + 32;
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