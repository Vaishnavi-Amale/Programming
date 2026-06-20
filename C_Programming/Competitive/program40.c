///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept Area in square feet and convert it into square meter
//   (1 square feet = 0.0929 square meter )
//  
//    Input : 5
//    Output : 0.464515
//    
//    Input :  7
//    Output : 0.650321
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(float fValue)
{
    double dSquareMeter = 0.0;

    dSquareMeter =  fValue * 0.0929;

    return dSquareMeter;
}

int main()
{
   float fValue = 0;
   double dRet = 0.0;

   printf("Enter area in square feet: ");
   scanf("%f",&fValue);

   dRet = SquareMeter(fValue);

   printf("Area in square meter is %lf",dRet);

   return 0;
}