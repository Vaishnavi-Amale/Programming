///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to check whether a number is a palindrome or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPalindrome(int num)
    {
       int iDigit = 0;
       int Reverse = 0;
       int original = num;

       while(num != 0)
       {
          iDigit = num %  10;

          Reverse = Reverse * 10 + iDigit;

          num = num / 10;   
       }

       if(original == Reverse)
       {
            System.out.println("Number is palindrome");
       }
       else
       {
           System.out.println("Number is not palindrome");
       }
    }

}

class program77
{
    public static void main(String a [])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(321);
    }
}