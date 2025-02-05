#include <stdio.h>

// vehicle weight classification

int main()
{
    int input; // 4 bytes

    printf("Enter a vehicle weight: \n");
    scanf("%d", &input);

    printf("You entered: %d \n", input);

    if (input < 10000) 
        {
        printf("l\n");
        }
    else if ((input >= 10000) && (input < 26000)) 
        {
        printf("m\n");
        }
    else
        {
        printf("h\n");
        }
}