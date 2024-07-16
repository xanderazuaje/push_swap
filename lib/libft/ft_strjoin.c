/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xazuaje- <xazuaje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:20:16 by xazuaje-          #+#    #+#             */
/*   Updated: 2024/07/16 06:17:51 by xazuaje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	set_lens(char const *s1, char const *s2, size_t *len1, size_t *len2)
{
	*len1 = ft_strlen(s1);
	*len2 = ft_strlen(s2);
	return (*len1 + *len2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	total;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	if (!s1)
	{
		return (ft_strdup(s2));
	}
	if (!s2)
	{
		return (ft_strdup(s1));
	}
	total = set_lens(s1, s2, &len1, &len2);
	new_str = malloc(total + 1);
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, len1);
	ft_memcpy((new_str + len1), s2, len2);
	new_str[total] = 0;
	return (new_str);
}
