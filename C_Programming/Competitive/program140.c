/*
    Accept division of student from user and depends on the division display exam timing. 
    There are 4 divisions in school as A,B,C,D. Exam of division at 7 AM, B at 8.30 AM 
    , C at 9.30 AM and D at 10.30 AM. (Application should be case sensitive)

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
    {
        return TRUE;
    }    
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division : \n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

   
    if(bRet == TRUE)
    {
        if(cValue == 'A')
        {
            printf("Exam at 7:00 AM\n");
        }
        else if(cValue == 'B')
        {
            printf("Exam at 8:30 AM\n");
        }
        else if(cValue == 'C')
        {
            printf("Exam at 9:30 AM\n");
        }
        else if(cValue == 'D')
        {
            printf("Exam at 10:30 AM\n");
        }
    }
    else
    {
        printf("Invalid Division\n");
    }

    return 0;
}