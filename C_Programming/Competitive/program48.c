///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Write a program which accept range from user and return addition of all numbers in between that range.
//    (Range should contain positive numbers only)
//  
//    Input : 23   50
//    Output :  1022
//
//    Input :  10  18
//    Output :  126
//
//    Input : -10  2
//    Output :  Invalid range
//
//    Input :  90   18
//    Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{

   int iCnt = 0;
   int iSum = 0;

   if(iStart < 0 || iEnd < 0 || iStart > iEnd )
   {
      printf("Invalid range ");
      return 0;
   }
   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
      iSum = iSum + iCnt;  
   }
    return iSum;
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}