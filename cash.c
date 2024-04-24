#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int change, coins = 0;

    // Prompt the user for the change owed until a valid positive integer is entered
    do
    {
        change = get_int("Change owed: ");
    }
    while (change <= 0);

    // Calculate the minimum number of coins needed using a greedy algorithm
    while (change >= 25)
    {
        change -= 25;
        coins++;
    }
    while (change >= 10)
    {
        change -= 10;
        coins++;
    }
    while (change >= 5)
    {
        change -= 5;
        coins++;
    }
    while (change >= 1)
    {
        change -= 1;
        coins++;
    }

    // Print the minimum number of coins needed
    printf("%d\n", coins);

    return 0;
}
