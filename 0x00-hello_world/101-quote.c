#include <unistd.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified message to the standard error
 *
 * Return: Always 1
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = sizeof(message) - 1;
	ssize_t ret;

	ret = syscall(SYS_write, STDERR_FILENO, message, len);
	if (ret != (ssize_t)len)
		return (1);

	return (1);
}

