#include <stdlib.h>

/**
 *_strlen - calculates the length of a string
 *@str: character pointer
 *Return: number of strings as Integer
 */
size_t _strlen(char *str)
{
	size_t i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}


/**
 *_strdup - creates a copy of given string and returns a pointer to it
 *Return: pointer to array
 *@str: character pointer
 */
char *_strdup(char *str)
{
	size_t size = _strlen(str), i;
	char *ptr = (char *) malloc((size + 1) * sizeof(*ptr));

	if (ptr != NULL)
	{
		for (i = 0; i <= size; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}
