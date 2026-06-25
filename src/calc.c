// Include main C header files

#include <cs50.h> // CS50 header file
#include <stdio.h> // Standard I/O header file

// Prototype functions

float add (float num1 , float num2);
float subtract (float num1 , float num2);
float multiply (float num1 , float num2);
float divide (float num1 , float num2);

// Main code

int main(void)
{
    char conti; 
    do 
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
         else
         {
            printf("Error : Invailed Input\n");
            continue;
         }
           // Ask if the user want to continue or not


           conti = get_char("Do you want to continue?[Y/n] ");

           // if the user want to continue is use Y :

           if (conti == 'y' || conti == 'Y')
           {
               continue;
               
           }
           
           // if the user want to exit from the program is use N :

           else if (conti == 'n' || conti == 'N')
           {
                
              break;
           }

           // if the user want to see debugging informations is use D :

           else if (conti == 'd' || 'D')
           {
                printf("Debugging option opened:\n");
                printf("[DEBUG] varibale \"input_number\" = %.2f\n", input_number);
                printf("[DEBUG] varibale \"second_input_number\" = %.2f\n", second_input_number);
                printf("[DEBUG] varibale \"calculation\" = %c\n", calculation);
                printf("Debugging options closed\n");
                break;
           }

           // if the user writed a wrong letter that's will happened : 

            else
            {
                printf("Error : Invalid input\n");
                break;
            }
            return 0;
    }
    while(true); // Apply the loop
}
// The calculation functions

float add (float num1 , float num2)
{
    return num1 + num2; // Add function
}
float subtract (float num1 , float num2)
{
    return num1 - num2; // Subtract function
}
float multiply (float num1 , float num2)
{
    return num1 * num2; // Multiply function
}
float divide (float num1 , float num2)
{
    return num1 / num2; // Divide function
}

