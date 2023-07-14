#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Concatenates two strings: s1 and s2.
 * The returned pointer points to a newly allocated space in memory,
 * which contains s1 followed by the first n bytes of s2, and is null terminated.
 * If the function fails, it returns NULL.
 * If n is greater or equal to the length of s2, the entire string s2 is used.
 * If NULL is passed for s1 or s2, they are treated as empty strings.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

size_t len1, len2;

	if (s1 == NULL)
    	s1 = "";
	if (s2 == NULL)
    	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);


	char *result;

	result = (char *)malloc((len1 + n + 1) * sizeof(char));
 	if (result == NULL)
	return NULL;

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}

int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";
	unsigned int n = 3;

	char *concatenated = string_nconcat(s1, s2, n);

	if (concatenated != NULL)
	{
	printf("Concatenated string: %s\n", concatenated);
	free(concatenated);
	}

	else
	{
	printf("Failed to allocate memory.\n");
	}

	return (0);
}
