// Include main C header files

#include <cs50.h>
#include <stdio.h>

// Call functions

float add (float num1 , float num2);
float subtract (float num1 , float num2);
float multiply (float num1 , float num2);
float divide (float num1 , float num2);

// Main code

int main(void)
{
    char conti; 
    while(true) // That's loop for the calculator running forever if the user didn't stop it
    {
        // First inputs

        float input_number = get_float("Put First number:\n");
        float second_input_number = get_float("Put Second number:\n");
        char calculation = get_char("Choose a calculation:\n");

         // Outputs

         if (calculation == '+')
         {
            printf("The answer is : %.2f\n", add(input_number , second_input_number));
         }
         else if (calculation == '-')
         {
            printf("The answer is : %.2f\n", subtract(input_number , second_input_number));
         }
         else if (calculation == '*')
         {
            printf("The answer is : %.2f\n", multiply(input_number , second_input_number));
         }
         else if (calculation == '/')
         {
            if (second_input_number != 0)
            {
                printf("The answer is : %.2f\n", divide(input_number , second_input_number));
            }
            else
            {
                printf("Error : Cannot divide the number with zero\n");
            }
         }
           // Ask if the user want to continue or not

           conti = get_char("Do you want to continue?[Y/n] ");
           if (conti == 'y' || conti == 'Y')
           {
               continue;
               
           }
           else if (conti == 'n' || conti == 'N')
           {
                
              break;
            }
            else
            {
                printf("Error : Invalid input\n");
                break;
            }
    }
   
}
// The calculation functions

float add (float num1 , float num2)
{
    return (float) num1 + num2;
}
float subtract (float num1 , float num2)
{
    return (float) num1 - num2;
}
float multiply (float num1 , float num2)
{
    return (float) num1 * num2;
}
float divide (float num1 , float num2)
{
    if (num2 != 0)
    {
        return (float) num1 / num2;
    }
    return 0;
}
