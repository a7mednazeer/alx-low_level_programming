/**
 * _puts - Prints a string
 * @str: The string to print
 * Return : void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		printf(*str);
	}
	_putchar('\n');
}
