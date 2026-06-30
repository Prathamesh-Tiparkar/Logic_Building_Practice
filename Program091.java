// Write a program to check whether a given year is a leap year or not.

class Logic
{
    void checkLeapYear(int year)
    {
        int i = 0;

        if(i % 4 == 0)
        {
            System.out.println("Leap Year");
        }
        else
        {
            System.out.println("Not Leap Year");
        }
    }
}

class Program091
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}