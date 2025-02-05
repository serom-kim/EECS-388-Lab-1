// convert hexadecimal to binary

#include <stdio.h>

int main()
{
    char hexInput[20]; // get hex number

    printf("Enter a hex number: ");
    scanf("%19s", hexInput);

    printf("Binary conversion: ");
    hTob(hexInput); // call hTob function that converts

    return 0;

}

void hTob(char* hex)
{
    size_t i = (hex[1] == 'x' || hex[1] == 'X')? 2 : 0; // skip '0x' if it's at the beginning

    while (hex[i])
    {
        switch (hex[i])
        {
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            case 'A': case 'a': printf("1010"); break;
            case 'B': case 'b': printf("1011"); break;
            case 'C': case 'c': printf("1100"); break;
            case 'D': case 'd': printf("1101"); break;
            case 'E': case 'e': printf("1110"); break;
            case 'F': case 'f': printf("1111"); break;
            default:
            printf("Invalid hexadecimal digit %c\n", hex[i]);
            return;
        }
        i++;
    }
    printf("\n");
}

