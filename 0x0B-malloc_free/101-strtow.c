#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Loctaes indexmarking end of
 * first word contained in string
 * @str: string to be checked
 * Return: index marking end of initial word pointed to by str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - counts number of words contained in string
 * @str: string to be checked
 * Return: number of words contained in str
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of strings, othwerwise NULL
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, a, letters, b;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (a = 0; a < words; a++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[a] = malloc(sizeof(char) * (letters + 1));

		if (strings[a] == NULL)
		{
			for (; a >= 0; a--)
				free(strings[a]);

			free(strings);
			return (NULL);
		}

		for (b = 0; b < letters; b++)
			strings[a][b] = str[index++];

		strings[a][b] = '\0';
	}
	strings[a] = NULL;

	return (strings);
}
