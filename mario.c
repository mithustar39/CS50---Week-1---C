#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Prompt user for pyramid height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1); // Re-prompt if height is not greater than 0

    // Build the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
