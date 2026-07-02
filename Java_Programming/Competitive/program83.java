////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to print all odd numbers up to N
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printEvenNumbers(int num)
    {
        int i = 0;

        for(i = 1 ; i <= num ; i++)
        {
            if(i % 2 != 0)
            {
               System.out.println(i);
            }
          
        }
         
       
    }
}

class program83
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}