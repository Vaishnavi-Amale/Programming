////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to display the grade of a student based on marks
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
 {
    void displayGrade(int marks)
    {
      if(marks >= 90 &&  marks <= 100)
      {
         System.out.println("Grade is A");
      }
      else if( marks >= 80)
      {
        System.out.println("Grade is  B");
      }
      else if( marks >= 80)
      {
        System.out.println("Grade is  B");
      }
      else if( marks >= 70)
      {
        System.out.println("Grade is  C");
      }
      else if( marks >= 60)
      {
        System.out.println("Grade is  D");
      }
      else if( marks >= 35)
      {
        System.out.println("Pass");
      }
      else if( marks >= 0)
      {
        System.out.println("Fail");
      }
      else 
      {
          System.out.println("Invalid marks");
      }
    }
}

class program88
 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}