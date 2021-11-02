#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int days;
    days = get_int("Days: ");

    int start;
    start = get_int("Starting Number of Pennies: ");

    long long today = start;
    long long total = today;

    // add double the amount of pennies of the previous day each day
    for (int i = 1; i < days; i++)
    {
        today = today * 2;
        total = total + today;
    }

    // output the total as dollars and cents only
    printf("$%.2f\n", (double) total / 100);
}
