// EXTREMO - the game where in order to win, your numbers need to have both the biggest maximum AND the smallest minimum value
// Implement the findMin function and the printWinner function

#include <stdio.h>

int findMin(int array[], int length);
int findMax(int array[], int length);
void printWinner(int array1[], int length1, int array2[], int length2);

int main(void)
{
    int array1[] = {4, 8, 12, 5, 2, 5};
    int array2[] = {1, 14, 6, 8};

    // trick to calculate lengths of arrays;
    int length1 = sizeof(array1)/sizeof(array1[0]);
    int length2 = sizeof(array2)/sizeof(array2[0]);

    printWinner(array1, length1, array2, length2);
}

// Returns the maximum value in an array of ints
int findMax(int array[], int length)
{
    int max = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

// Returns the minimum value in an array of ints
int findMin(int array[], int length)
{
    return 0; //remove this and add your own code;

}

void printWinner(int array1[], int length1, int array2[], int length2)
{
    // Calculate who wins using findMax and findMin
    // then print out the appropriate statement.

    printf("The winner is Player 1\n");
    printf("The winner is Player 2\n");
    printf("Neither player wins\n");

}
