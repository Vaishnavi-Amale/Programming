//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to check whether number is a perfect number or not
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPerfect(int num)
    {
        int i = 0;
        int iSum = 0;

        for(i = 1; i<= num/2; i++)
        {
            if(num % i == 0)
            {
                iSum = iSum + i;
            }

        }
        if(iSum == num)
        {
            System.out.println("Number is perfect number");
        }
        else
        {
            System.out.println("Number is not perfect number");
        }


    }
}

class program93
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}