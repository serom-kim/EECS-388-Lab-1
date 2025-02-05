#include <stdio.h>
#include <float.h>

// basic calculator 

int main()
{
    double operandOne, operandTwo, result; // accounting for floats
    char operation;
    
    printf("Enter 1st operand: "); //read in operand
    scanf("%lf", &operandOne);

    printf("Enter operation: "); //read in operation
    scanf(" %c", &operation); //added space before %c to account for whitespace

    if (operation == 's')
    {
        result = operandOne * operandOne;
        printf("%.1lf\n", result); //limit to 1 decimal place
        return 0;
    }
    else
    {
        printf("Enter 2nd operand: ");
        scanf("%lf", &operandTwo);

        if (operation == '+')
        {
            result = operandOne + operandTwo;
            printf("%.2lf\n", result); // limit to 2 decimal spaces
        }
        else if (operation == '-')
        {
            result = operandOne - operandTwo;
            printf("%.2lf\n", result);
        }
        else if (operation == '*')
        {
            result = operandOne * operandTwo;
            printf("%.2lf\n", result);
        }
        else if (operation == '/')
        {
            {
                if (operandTwo == 0) // account for division by 0
                {
                    printf("Error: Division by zero. \n");
                    return 1;
                }
            }
            result = operandOne / operandTwo;
            printf("%.2lf\n", result);
        }
        else
        {
            printf("Error: Invalid operation.\n"); //in case user does not type in valid operation
            return 1;
        }
    }
    return 0;
}