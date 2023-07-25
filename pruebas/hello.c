/* Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
*/

#include <unistd.h>

int	main(void)
{
	write(1, "Hello World\n", 11);
}
			
