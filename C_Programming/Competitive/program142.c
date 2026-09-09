/*
     Accept a character from user.If character is small display its corresponding capital chracter,and if it is small 
     then display its corresponding capital.In other cases display as it is.

    Input : a

    Output : A

    Input : A

    Output : a

    Input : 4

    Output : 4
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

     printf("Corresponding character is :  %c\n",ch);

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue); 

    return 0;
}