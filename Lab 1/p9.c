// takes an int, bit, and override value for the bit. give the new output #

#include <stdio.h>

int main() 
{
    int num, bit, override;
    
    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Enter bit: ");
    scanf("%d", &bit);

    printf("Enter override: ");
    scanf("%d", &override);

    if (override == 1)
    {
        num = num | (1 << bit); // use OR and shift 1 place. set bit to 1
    }

    else if (override == 0)
    {
        num = num & ~(1 << bit); // use AND with complement of shifted 1 to clear properly
    }
    else
    {
        printf("Invalid override value.\n"); // incase a value not 0 or 1 is entered
        return 1;
    }

    printf("%d\n", num);
    return 0;
}