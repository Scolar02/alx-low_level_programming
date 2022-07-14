#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

/* another method using pointer notation

char *_strcat(char *dest, char *src)
{
        int i = 0;
	int j = 0;

	while (*(dest + i))
	   i++;

	while (*(src + j))
	{
	   *(dest+i) = *(src+j);
	   i++;
	   j++;
	}
	*(dest+i) = '\0';

	return (dest);
}
*/
