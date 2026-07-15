//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to find the sum of all even numbers upto N
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenNumbers(int n)
    {
        int i = 0;
        int SumEven = 0;

        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
               SumEven = SumEven + i;
            }            

        }
           System.out.println(SumEven);
    }
}

class program91
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}