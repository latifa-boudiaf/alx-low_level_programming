#include <unistd.h>

/**
 * main- entry point.
 * Return: 1(success)
 */
int main(void)
{
	char *message_part1 = "and that piece of art is useful\" - ";
	char *message_part2 = "Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message_part1, strlen(message_part1));
	write(STDERR_FILENO, message_part2, strlen(message_part2));
	return (1);
}
