//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    write a program to print numbers from N down to 1 in reverse order
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printReverse(int n)
    {
        int i = 0;

        for(i = n; i >= 1; i--)
        {
            System.out.println(i);
        }

    }
}

class program92
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}