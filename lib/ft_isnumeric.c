/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wupdegra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:27:45 by wupdegra          #+#    #+#             */
/*   Updated: 2020/08/04 12:41:46 by wupdegra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lib.h>

bool	ft_isnumeric(const char *str)
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return (0);
		str++;
	}
	return (1);
}