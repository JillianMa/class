#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{
    int number = get_int("Number: ");
    int answer = factorial(number);
    printf("%i! = %i\n", number, answer);
    
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
