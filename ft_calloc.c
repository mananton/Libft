/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mananton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:24:41 by mananton          #+#    #+#             */
/*   Updated: 2024/11/11 11:52:39 by mananton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (count != 0 && total / count != size)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total);
	return (ptr);
}
