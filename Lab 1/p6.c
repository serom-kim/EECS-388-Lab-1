// calculate length of string using pointer

#include <stdio.h>

int findLen(char *s); // declare findLen before main bc there was an issue

int main()
{
    char s[100]; // making sure it can store a full string
    printf("Enter string: ");
    scanf("%s", s);

    printf("%d\n", findLen(s)); // call func to find length of string
    return 0;
}

int findLen(char *s)
{
    int count = 0; 
    while (*s++) // move pointer and check if it's pointing to a valid char
    {
        count++; // increment count for character
    }
    return count;
}



