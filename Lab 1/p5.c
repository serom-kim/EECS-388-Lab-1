// count # of elements that have a duplicate

#include <stdio.h>

int main()
{
    int array_size;
    
    printf("How big is the array? ");
    scanf("%d", &array_size);

    int arr[array_size]; // store elements to array
    int dup_count = 0; // initialize count of unique duplicate elements

    for (int i = 0; i < array_size; i++) // for loop to take array size and print 
    {                                    // that # of "Enter element" statements
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < array_size; i++) // check for duplicates
    {
        int has_dup = 0; // initialize to check if arr[i] has duplicate
        
        for (int j = 0; j < array_size; j++)
        {
            if (i != j && arr[i] == arr[j]) // duplicate found
            {
                has_dup = 1;
                break;
            }
        }

        if (has_dup) // make sure a duplicate element is only counted once
        {
            int counted = 0;

            for (int k = 0; k < i; k++)
            {
                if (arr[k] == arr[i])
                {
                    counted = 1;
                    break;
                }
            }

            if (!counted) // if element has not been counted
            dup_count++; // add to the duplicate count
        }
    }

    printf("%d\n", dup_count);
    return 0;
    
}