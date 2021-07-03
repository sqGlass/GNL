/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:15:10 by sglass            #+#    #+#             */
/*   Updated: 2020/11/11 11:50:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	if ((int)start >= i)
	{
		a = malloc(1);
		a[0] = '\0';
		return (a);
	}
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);
	while (s[start] != '\0' && j < len)
	{
		a[j] = s[start];
		j++;
		start++;
	}
	a[j] = '\0';
	return (a);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*x;

	i = 0;
	x = s;
	if (n == 0)
	{
		return ;
	}
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dst;
	s = src;
	if (dst == '\0' && src == '\0')
		return (NULL);
	if (src > dst)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	return (dst);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (void*)malloc(count * size);
	if (NULL == c)
		return (NULL);
	while (i < count * size)
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	const char		*ss;
	unsigned char	cc;

	i = 0;
	ss = s;
	cc = c;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc)
			return ((char *)&ss[i]);
		i++;
	}
	if (ss[i] == cc)
		return ((char *)&ss[i]);
	return (NULL);
}
