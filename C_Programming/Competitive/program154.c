/*
    Write a program which accepts a string from the user and display only digits from that string
    Input : marvellous1234
    Output : 1234
*/

#include<stdio.h>
#include<stdlib.h>

void displayDigit(char *str)
{
   while(*str != '\0')
   {
      if(*str >= '0' && *str <= '9')
      {
         printf("%c", *str);
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

    return 0;
}