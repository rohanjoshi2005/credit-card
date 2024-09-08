#include <stdio.h>

int main()
{
    int num, i, odd = 0, even = 0, even1, even2, multiple_even_add = 0;
    printf("Enter the size of array : ");
    scanf("%d", &num);
    int arr[num];

    for (i = 0; i < num; i++)
    {
        printf("number at arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // odd
    for (i = 1; i < num; i += 2)
    {
        odd = odd + arr[i];
    }
    printf("\nThe sum of numbers at odd position are %d\n", odd);

    // even
    for (i = 0; i < num; i += 2)
    {
        int even_digit = arr[i] * 2;
        if (even_digit >= 10)
        {

            even1 = even_digit % 10;
            even2 = even_digit / 10;
            multiple_even_add += even1 + even2;
        }
        else
        {
            multiple_even_add += even_digit;
        }
    }
    printf("Sum of numbers at even position are %d\n", multiple_even_add);

    // checking th sum
    int checksum = multiple_even_add + odd;
    printf("Checksum %d\n", checksum);
    if (checksum % 10 == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
