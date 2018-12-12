/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 21:33:09 by juochen           #+#    #+#             */
/*   Updated: 2018/02/28 13:15:50 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strchri(char *s, char c)
{
	int		i;

	i = -1;
	while (s && s[++i])
	{
		if (s[i] == c)
			return (i);
	}
	return (-1);
}
