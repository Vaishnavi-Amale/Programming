////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Write a program to calculate the power of a  number using loops
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
 {
    void calculatePower(int base , int exp)
    {
      int i = 1;
      int iResult = 1;

      for(i = 1; i <= exp ; i++)
      {
         iResult = iResult * base;
      }
      System.out.println(iResult);
       
    }
}

class program90
 {
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}