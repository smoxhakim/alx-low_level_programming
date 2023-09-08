/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char star = 'a';
	char end = 'z';
	char cont;

	for(cont = star; cont <= end; cont++)
	{
		/* this fonction wna print alphabet */
		putchar(cont);
	}

	putchar('\n');

	return (0);

}
