/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:43:05 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/15 15:55:22 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char  *ft_strstr(cahr *str, char *to_find)

{

	int x;
	int y;
    x = 0;

while(str[x] ! = '\0')

{
	y = 0;

	while(to_find[y] ==str[x + y])

	{ 
		if(to_find[y + 1] == '\0')

	{

		return(str = x);

	}

	y++;

}
x++;

}

return (0);

}  


