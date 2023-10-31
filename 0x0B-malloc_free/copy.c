#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *
 */
char **strtow(char *str)
{
	int word_count, in_word, word_index, word_start, word_length, i, j;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	word_count = 0;
	in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (!in_word)
			{
				in_word = 1;
				word_count++;
			}
		}
		else
			in_word = 0;
	}
	**words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0;
	word_start = 0;
	in_word = 0;
	word_length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (!in_word)
			{
				in_word = 1;
				word_start = i;
			}
		}
		else
		{
			if (in_word)
			{
				word_length = i - word_start;
				words[word_index] = (char *)malloc(word_length + 1);

				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
						free(words[j]);
					free(words);
					return (NULL);
				}

				strncpy(words[word_index], str + word_start, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
			}
			in_word = 0;
		}
	}
	if (in_word)
	{
		word_length = strlen(str) - word_start;
		words[word_index] = (char *)malloc(word_length + 1);

		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + word_start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
