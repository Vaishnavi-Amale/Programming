//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to count how many even and odd numbers are present between 1 and N
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countEvenOddRange(int num)
    {
       int iEvenCount = 0;
       int iOddCount = 0;
       int i = 0;


          for(i = 1; i <= num ;i++)
          {
            if(i % 2 == 0)
            { 
                iEvenCount++;
            }  
            else
            {
                iOddCount++;
            }            
          }
          
          System.out.println("Even Count : "+iEvenCount);
          System.out.println("Odd Count : "+iOddCount);
    }
   
}

class program97
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}