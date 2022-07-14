#include "main.h"

/**
 * *_strcat - function that concatenates strings
 * @src: source
 * @dest: destination
 *
 * Return: returns the destination
 */

char *_strcat(char *dest, char *src)
{
	int ind = 0, ind2 = 0;

	while (*(dest + ind) != '\0')
	{
		ind++;
	}

	while (ind2 >= 0)
	{
		*(dest + ind) = *(src + ind2);
		if (*(src + ind2) == '\0')
			break;
		ind++;
		ind2++;
	}
	return (dest);
}
