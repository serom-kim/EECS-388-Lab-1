#include <stdio.h>

// is the bit set or not

int is_set (int x, int bit);

int main() 
{
    int val;
    int bit;
    int set;

    printf("Enter integer: ");
    scanf("%d", &val);

    printf("Enter bit: ");
    scanf("%d", &bit);

    set = is_set(val, bit); // 7, 2

    if (set)
    printf("TRUE \n");
    else
    printf("FALSE \n");
return 0;
}

int is_set (int x, int bit) // x = 7, bit = 2
{
    int ret;
    
    if ((x & (1 << bit)) != 0) // 0b1 << 2, 0b100   // 0b1 << 3, 0b1000
    ret = 1;                   // x = 7,  & 0b111   // x = 7,  & 0b0111
    else                       //           0b100   //           0b1111
    ret = 0;
    return ret;
}
