////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to check whether a given year is a leap year or not
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
 {
    void checkLeapYear(int year)
    {
      if( year % 400 ==  0)
    {
        System.out.println("leap year");
    }
    else if( year % 4 == 0 && year % 100 != 0)
    {
        System.out.println("Leap year");
    }
    else 
    {
        System.out.println("not a leap year");
    }
        

    }
}

class program86
 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}