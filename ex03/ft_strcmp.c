/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:58:40 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 16:04:48 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)

{
	int x;
	x = 0;

	while(s1[x] == s2 [x] && s1[x] != '\0' && s2[x] ! = '\0')

	{

		x++;
	}

	return (0);
}
