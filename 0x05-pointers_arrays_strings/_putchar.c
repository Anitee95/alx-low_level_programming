#include <unistd.h>


/**
 * _putchar - writes the char c to stdout
 * gc: The character to print
 * Retun: On success 1
 * on error, -1 is returned and error is set apppropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
