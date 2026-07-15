//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to print all  numbers from 1 to N that are divisible by both 2 and 3.
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printDivisibleBy2and3(int num)
    {
       int i = 0;

       for(i = 1; i <= num; i++)
       {
          if(i % 2 == 0 && i % 3 == 0)
          {
             System.out.println(i);
          }
          
       }

    }
   
}

class program100
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}