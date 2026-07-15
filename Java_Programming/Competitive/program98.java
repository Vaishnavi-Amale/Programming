//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to display all factors of a given number
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void displayFactor(int num)
    {
       int i = 0;

       for(i = 1; i <= num; i++)
       {
          if(num % i == 0)
          {
             System.out.println(i);
          }    
       }
       
       


    }
   
}

class program98
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayFactor(12);
    }
}