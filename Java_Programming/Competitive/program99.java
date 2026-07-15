//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to count total number of factors of a given number
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countFactor(int num)
    {
       int i = 0;
       int iCount = 0;

       for(i = 1; i <= num; i++)
       {
          if(num % i == 0)
          {
             iCount++;
          }    
       }
       System.out.println(iCount);
       
       


    }
   
}

class program99
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactor(20);
    }
}