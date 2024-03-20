/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:10:57 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/18 20:07:55 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc, returns an array of strings obtained
 * by splitting <s> with char <c> as a delimiter -- array must
 * end with a NULL pointer, returns NULL on malloc fail */

/* I didn't cover `split` in the piscine, so this is a learning
 * experience with many statics involved -- if <c> is a delimiter, 
 * meaning it separates "words" in the str <s> provided, then I'll
 * need a function to count how many words are in the original <s>,
 * in order to malloc the return value **char, then create a str for
 * each word and ultimately combine them into the new return array */

/* `wordcount` counts the words in <s> as separated by c; `wordlen`
 * takes the length of each word to be passed on for copying via
 * `substr` in `splitter`; `free` frees memory on `malloc` failure;
 * `splitter` does the heavy lifting of finding the words separated
 * by <c> and copying them into <array>, so that `split` can simply
 * malloc, free on error, and return <array> */

#include "libft.h"

static size_t	ft_wordcount(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs);
		i++;
	}
	free(strs);
}

static char	**ft_splitter(char const *s, char c, char **array, size_t wordcount)
{
	size_t	loop;
	size_t	n;

	loop = 0;
	n = 0;
	while (loop < wordcount)
	{
		while (s[n] && s[n] == c)
			n++;
		array[loop] = ft_substr(s, n, ft_wordlen(&s[n], c));
		if (!array[loop])
		{
			ft_free(array);
			return (0);
		}
		while (s[n] && s[n] != c)
			n++;
		loop++;
	}
	array[loop] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (0);
	words = ft_wordcount(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
	if (!array)
		return (0);
	array = ft_splitter(s, c, array, words);
	return (array);
}
/*
int	main(void)
{
	char	string[] = "This is a string";
	char	c = ' ';
	int	i = 0;
	char	**tab = ft_split(string, c);

	printf("Original string was: %s\n", string);
	printf("Separator was: %c\n", c);
	printf("Separated strings are: \n");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

}*/
