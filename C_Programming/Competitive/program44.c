///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Write a program which accept number from user and return multilplication of all digits
//   
//  
//    Input : 2395
//    Output : 270
//    
//    Input :  1018
//    Output :  0
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{

  int iCount = 0;
  int iDigit = 0;
  int iMult = 1;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   while(iNo != 0)
   {
      iDigit = iNo %  10;

      if(iDigit != 0)
      {
         iMult = iMult * iDigit;
      }

      iNo = iNo / 10;
   }
   return iMult;



}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}