#include "main.h"

/**
 * write_call - uses a local buffer to call write
 * @buffer: buffer to write
 * @size: size of buffer
 * Return: number of characters printed
 */
int write_call(char *buffer, int size)
{
	static char local_buffer[1024];
	static int index;
	int i;

	for (i = 0; i < size; i++)
	{
		local_buffer[index] = buffer[i];
		index++;
		if (index == 1024)
		{
			write(1, local_buffer, 1024);
			index = 0;
		}
	}
	return (size);
}

