////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to print each digit of a number seperately
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
 {
    void printDigits(int num)
    {
       int iDigit = 0;

       while( num != 0)
      {
         iDigit = num % 10;

         System.out.println(iDigit);

         num = num / 10;
      }
       
    }
}

class program89
 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}