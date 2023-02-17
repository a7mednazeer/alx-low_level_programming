#include <stdio.h>

/**
 * main - main function to run code
 * Description: prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01 .
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * 00 01 & 01 00 are considered as a same combination of the numbers 0 and 1 .
 * Return: 0
 */
int main(void)
{
  int i, j;

  for (i = 0; i <= 9; i++)
  {
    for (j = 0; j <= 9; j++)
    {
      if (i == 0 && j == 0)
      {
        putchar('0');
        putchar('0');
      }
      else if (i == 0 && j != 0)
      {
        putchar('0');
        putchar(j + '0');
      }
      else if (i != 0 && j == 0)
      {
        putchar(i + '0');
        putchar('0'); 
      }
      else
      { 
        putchar(i + '0');  
        putchar(j + '0'); 

      }

      if (!(i == 9 && j == 9))
      {
	      printf(" , ");   
      }  

    }

  }

  return (0);
}

