#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function to run code
 * Description: prints the lowercase alphabet in reverse, followed by a new line.
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char letter;

        for (letter = 'z'; letter >= 'a'; letter--)
	{
            printf("%c", letter);
        }

        printf("\n");

	return (0);
}
