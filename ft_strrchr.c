/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:15:34 by mananton          #+#    #+#             */
/*   Updated: 2024/11/13 11:33:14 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		res = (char *) &s[i];
	return (res);
}
