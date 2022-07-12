#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *  including the terminating null byte (\0)
 * @src: source
 * @dest: destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int ind = 0;

	while (ind >= 0)
	{
		*(dest + ind) = *(src + ind);
		if (*(src + ind) == '\0')
			break;
		ind++;
	}
	return (dest);
}
