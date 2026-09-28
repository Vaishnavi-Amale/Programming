/*
    Write a program which accepts a string from the user and accept one character. and return index of first 
    occurence of that character

    Input : ganpati bappa
            g
    Output : 0

    Input : ganpati bappa
            w
    Output : -1
*/

#include<stdio.h>
#include<stdlib.h>


int FirstChar(char *str, char ch)
{
    int i = 0;
   while(*str != '\0')
   {
      if(*str == ch)
      {
        return i;
      }
      
      str++;
      i++;
   }

   return -1;
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

   iRet = FirstChar(arr, cValue);

   printf("Character location is %d ",iRet);

    return 0;
}