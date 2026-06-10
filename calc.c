#include <cs50.h>
#include <stdio.h>

int add (int num1 , int num2);
int subtract (int num1 , int num2);
int multiply (int num1 , int num2);
float divide (int num1 , int num2);

int main(void)
{
    int input_number = get_int("Put First number:\n");
    int second_input_number = get_int("Put Second number:\n");
    char calculation = get_char("Choose a calculation:\n");
    
    if (calculation == '+')
    {
        printf("The answer is : %i\n", add(input_number , second_input_number));
    }
    else if (calculation == '-')
    {
        printf("The answer is : %i\n", subtract(input_number , second_input_number));
    }
    else if (calculation == '*')
    {
        printf("The answer is : %i\n", multiply(input_number , second_input_number));
    }
    else if (calculation == '/')
    {
        if (second_input_number != 0)
        {
            printf("The answer is : %.2f\n", divide(input_number , second_input_number));
        }
        else
        {
            printf("Error : Cannot divide the number with zero");
        }
    }

}

int add (int num1 , int num2)
{
    return num1 + num2;
}
int subtract (int num1 , int num2)
{
    return num1 - num2;
}
int multiply (int num1 , int num2)
{
    return num1 * num2;
}
float divide (int num1 , int num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    return 0;
}
