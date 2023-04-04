/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:12:00 by elharuty          #+#    #+#             */
/*   Updated: 2023/03/20 16:12:03 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = malloc(sizeof(char) * len);
	if (!c)
		return (0);
	while (s1[j] != '\0')
		c[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (!n && src == dst)
		return (dst);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
			i++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		s1[i++] = s[start++];
	s1[i] = '\0';
	return (s1);
}
