#include "part2.h"
#include <iostream>
#include <stdexcept>

void safe_string_copy(char* dest, unsigned int destsize, char* src)
{
	unsigned int srcsize = (unsigned int)strlen(src);
	if (srcsize >= destsize)
		throw std::overflow_error("possible buffer overflow");

	for (unsigned int i = 0; i < destsize * sizeof(*src); i++)
		*dest++ = *src++;
}


#define BUF_SIZE 20
void part2()
{
	char password[] = "secret";
	char dest[BUF_SIZE];
	char src[] = "hello world!";

	safe_string_copy(dest, BUF_SIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
