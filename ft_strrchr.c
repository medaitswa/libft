/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassi <mnassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:41:25 by mnassi            #+#    #+#             */
/*   Updated: 2022/10/23 15:06:27 by mnassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*p;

	j = ft_strlen(s);
	p = (char *)s;
	while (j >= 0)
	{
		if (p[j] == (char)c)
			return (&p[j]);
		j--;
	}
	return (NULL);
}
