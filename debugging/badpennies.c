#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int totaldays, startpennies, totalpennies;
    do
    {
        totaldays = get_int("How many days in the month?");
    }
    while (!(totaldays >= 28 && totaldays <=31));

    do
    {
        startpennies = get_int("How many pennies to start?");
    }
    while (startpennies < 1);

    int day = 0;
    while (day < totaldays)
    {
        int pennies = pow(2,day);
        totalpennies = totalpennies + pennies;
        day++;
    }
    printf("Total money: %f", (float) totalpennies/100);

}
