#include <unistd.h>
/**
 * main - prints
 *
 * description: prints
 *
 * Return: alwyas1
 *
 */
int main(void)
{
	const char message[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDERR_FILENO, message, sizeof(message) - 1);
	return (1);
}
