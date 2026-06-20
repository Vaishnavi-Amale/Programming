///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept temperature in Fahrenheit and  convert it into celcius.
//   (1 celcius = (Fahrenheit-32)*(5/9))
//  
//    Input : 10
//    Output : -12.22222  (10-32) * (5/9)
//    
//    Input :  34
//    Output : 1.11111 (34-32) * (5/9)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
   double Celcius = 0.0;

   Celcius = (fTemp-32) * (5.0/9.0);

   return Celcius;

}

int main()
{
   float fValue = 0.0;
   double dRet = 0.0;

   printf("Enter temperature in Fahrenheit: ");
   scanf("%f",&fValue);

   dRet = FhtoCs(fValue);

   printf("Temerature in celcius is: %lf",dRet);

   return 0;
}