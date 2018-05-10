/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhalfao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 20:28:56 by kkhalfao          #+#    #+#             */
/*   Updated: 2017/02/28 20:35:48 by kkhalfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s1, int n)
{
	char *ret;

	ret = ft_strnew(n);
	if (!ret)
		return (NULL);
	ret = ft_strncpy(ret, s1, n);
	return (ret);
}
