/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:48:38 by cperales          #+#    #+#             */
/*   Updated: 2024/10/15 16:50:53 by cperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned char		*sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (sr < dst && dst < sr + n)
	{
		while (n--)
			dst[n] = sr[n];
	}
	else
		while (n--)
			*(dst++) = *(sr++);
	return (dest);
}

/*
int main()
{
	char s[12] = "mundo";
	char d[12] = "hola";
	ft_memmove(d, s, 3);
	printf("%s\n", d);
}*/
