#include "main.h"
#include <umistd.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}
