/*
    Write a program which accepts a string from the user and count number of white spaces
    Input : marvellous1234
    Output : 1234
*/

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int count = 0;
    
   while(*str != '\0')
   {
      if(*str == ' ')
      {
         count++;
      }

      str++;
   }

   return count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}