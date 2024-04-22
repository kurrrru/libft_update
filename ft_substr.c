/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:26:23 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/04/19 01:41:08 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*ret;
	size_t	i;

	if (!s)
		return ((void *)0);
	l = 0ul;
	while (s[l] != '\0')
		l++;
	if (len < l - start)
		ret = (char *)malloc((len + 1) * sizeof(char));
	else if (start < l)
		ret = (char *)malloc((l - start + 1));
	else
		ret = (char *)malloc(1);
	if (!ret)
		return ((void *)0);
	i = 0ul;
	while (i < len && i + start < l)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}