/*
    Write a program which accepts a string from the user and accept one character. and return index of last 
    occurence of that character

    Input : Marvelous Multi os
            M
    Output : 11

    Input : ganpati bappa
            w
    Output : -1
*/

#include<stdio.h>
#include<stdlib.h>


int LastChar(char *str, char ch)
{
    int i = 0;
    int last = -1;

   while(*str != '\0')
   {
      if(*str == ch)
      {
        last = i;
      }
      
      str++;
      i++;
   }

   return last;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

   iRet = LastChar(arr, cValue);

   printf("Character location is %d ",iRet);

    return 0;
}