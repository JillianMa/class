/* C Program to Count Even and Odd Numbers in an Array */
#include <stdio.h>
#include <cs50.h>

int main()
{
  int evenCount = 0;
  int oddCount = 0;

  int size = get_int("Please Enter the Size of an Array:  ");
  int numbers[size];

  printf("Please Enter the Array Elements:\n");

  for(int i = 0; i < size; i++)
  {
    get_int("Number: ");
  }

  for(int i = 0; i < size; i++)
  {
    if(numbers[i] % 2 == 0)
    {
      evenCount++;
    }
    else
    {
      oddCount++;
    }
  }
  printf("Total Number of Even Numbers in this Array = %d \n", evenCount);
  printf("Total Number of Odd Numbers in this Array = %d \n", oddCount);
}
