////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to find the sum of even and odd digits seperately in a number
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
 {
    void sumEvenOddDigits(int num)
    {
        int SumEven = 0;
        int SumOdd = 0;
        int iDigit = 0;

        while (num != 0) 
        {
            iDigit = num % 10;

            if (iDigit % 2 == 0) 
            {
                SumEven = SumEven + iDigit;
            } else
            {
                SumOdd = SumOdd + iDigit;
            }

            num = num / 10;
        }

        System.out.println("Even sum is : "+ SumEven);
        System.out.println("Odd sum is : "+ SumOdd);

    }
}

class program84
 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}