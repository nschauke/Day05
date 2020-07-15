/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:03:52 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 15:09:25 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char 		*ft_string(char *dest, char *src, unsigned int n)

{
	int r;

	r = 0;

	while (n > = 0)

	{
		src[r] = dest[r];
		r++;

	}

	return (dest);

}




