#include <stdio.h>

int max(int num1, int num2); //function declaration

int main (void) {

   //local variable definition
   int a = 100;
   int b = 200;
   int ret;

   ret = max(a, b); //calling a function to get max value

   printf( "Max value is : %i\n", ret );

}


int max(int num1, int num2)  //function definition
{

   //
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result;
}
