////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to check whether a number is prime or not
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int num)
    {
        int iCount = 0;
        int i = 0;

        for(i = 1 ; i <= num ; i++)
        {
            if(num % i == 0)
            {
                iCount++;
            }
          
        }
         if (iCount == 2)
            {
                System.out.println("Number is prime");
            }
        else
           {
               System.out.println("Number is not prime");
           }
       
    }
}

class program81
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}