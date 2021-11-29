#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool isvowel(char ch);

int main(void)
{
  	string input = get_string("Enter any String: ");
	int vowels = 0;
	int consonants = 0;

  	for (int i = 0; i < strlen(input); i++)
  	{
  		if (!isalpha(input[i])) {
  			continue;
  		}

  		if (isvowel(input[i]))
		{
  			vowels++;
 		}
  		else {
    		consonants++;
  		}
	}
    printf("Number of Vowels = %i\n", vowels);
	printf("Number of Consonants = %d\n", consonants);

}

bool isvowel(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
       ch = ch + 32;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
       return true;
    }
    else {
    	return false;
    }
}
