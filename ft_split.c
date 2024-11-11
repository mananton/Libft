/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:58:21 by mananton          #+#    #+#             */
/*   Updated: 2024/11/08 11:36:09 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	ft_countwords(const char *s, char c)
{
	size_t	res;

	res = 0;
	while (*s)
	{
		if (*s != c)
		{
			++res;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	res = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			res[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}
/*
void print_split(char **split_result)
        {
                int     i;

                i = 0;
                if (!split_result)
                {
                        printf("NULL\n");
                        return;
                }
                while (split_result[i])
                {
                        printf("Segment %d: '%s'\n", i, split_result[i]);
                        free(split_result[i]);
                        i++;
                }
                free (split_result);
        }
int	main()
{
	char	**result;

	printf("Test case 1: Basic split\n");
	result = ft_split("Hello World This is a test", ' ');
	print_split(result);

	printf("\nTest case 2: Multiple delimiters in a row\n");
	result = ft_split("Hello  World   This   is   a  test", ' ');
	print_split(result);

	printf("\nTest case 3: String starts and ends with delimiters\n");
	result = ft_split("  Hello World  ", ' ');
	print_split(result);

	printf("\nTest case 4: Only delimiters\n");
	result = ft_split("     ", ' ');
	print_split(result);

	printf("\nTest case 5: Empty string\n");
	result = ft_split("", ' ');
	print_split(result);

	printf("\nTest case 6: Delimiter not found in string\n");
	result = ft_split("HelloWorld", ' ');
	print_split(result);

	return 0;
}*/
