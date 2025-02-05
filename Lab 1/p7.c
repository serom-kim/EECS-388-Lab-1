/* takes an int, store as int var 'temp', create int ptr var 'temp_ptr',
set it to point out address of int var */

#include <stdio.h>

int main()
{
    int temp;
    printf("Enter integer: ");
    scanf("%d", &temp);

    int* temp_ptr = &temp; // pointer declaration

    printf("%d,\n", temp);// value of 'temp' using 'temp'
    printf("%d,\n", *temp_ptr); // value of 'temp' using deref 'temp_ptr'
    printf("%p,\n", &temp); // address of 'temp' using 'temp'
    printf("%p\n", temp_ptr); // address of 'temp' using 'temp_ptr'

}