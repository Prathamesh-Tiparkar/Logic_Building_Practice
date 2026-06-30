// Write a program to display the grade of a student based on the marks

class Logic
{
    void displayGrade(int marks)
    {
        if(marks < 100 && marks >= 80)
        {
            System.out.println("Grade A");
        }
        else if(marks <= 79 && marks >= 50)
        {
            System.out.println("Grade B");
        }
        else if(marks <= 49 && marks >= 30)
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class Program092 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(49);
    }
}
