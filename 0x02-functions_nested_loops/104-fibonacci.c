#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98; /* Number of Fibonacci numbers to print */
	int first = 1, second = 2;

	printf("%d, %d", first, second);

	for (int i = 3; i <= n; i++)
	{
		int next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
	return (0);
}
