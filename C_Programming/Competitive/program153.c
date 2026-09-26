/*
    Write a program which accepts a string from the user and toggle the case
    Input : marvellouS
    Output : MARVELLOUs
*/

#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'A' && *str <= 'Z')
      {
         *str = *str + 32;
      }
      else
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