#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2:second string
 * @n: number of bytes of s2
 * Return: cncatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *s;

	if (s1 == NULL)
		s1[i] = "";
	if (s2 == NULL)
		s2[j] = "";
	while (s1[i] != '\0')
		{
			i++;
		}
	while (s2[j] != '\0')
		{
			j++;
		}
	if (n >= j)
		n = j;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
