/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschauke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:23:18 by nschauke          #+#    #+#             */
/*   Updated: 2020/07/16 11:32:31 by nschauke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)

{
	int x;
	x = 0;

	while(str[x] ! ='\0')


	{
		if(str[x] >='a' && str[x] <= 'x')

		{
			printf("the char is %c.\n", str[x]);

			str[x] -= 32;

		}

		x++;

	}

	return (str);

}
