//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to find smallest digit in a given number
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findSmallestDigit(int num)
    {
       int iDigit = 0;
       int iMin = num % 10;

       while(num != 0)
       {
          iDigit = num % 10;

          if(iDigit < iMin )
          {
             iMin = iDigit;
          }          
          num = num / 10;        
       }

       System.out.println(iMin);
    }
}

class program95
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}