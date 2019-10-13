/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 01:43:21 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 01:43:53 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Uses malloc 3 to allocate and return a new arr of strs ending with \0
** including the arr itself. This arr is obtained by splitting s using the
** char c as a delim if alloc fails, return NULL
** Example:
** ft_strsplit("*hello*fellow***students*", ’*’)
**		Returns ["hello", "fellow", "students"]
**	Param: string to split, delim char
**	Return: array of new strings
*/

#include "libft.h"

static int		ft_strlen_firstword(char *s, char dl)
{
	int		count;

	count = 0;
	while (s && *s != dl && *s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*dup;
	char	**arr;
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	if (!s || !c)
		return (NULL);
	dup = ft_strdup(s);
	if (!(arr = ft_memalloc(ft_countwords(dup, c))))
		return (NULL);
	while (dup && *dup)
	{
		if (*dup != c)
		{
			tmp = ft_memalloc(ft_strlen_firstword(dup, c));
			i = 0;
			while (*dup != c && *dup != '\0')
			{
				tmp[i++] = *dup++;
			}
			arr[j++] = tmp;
		}
		dup++;
	}
	return (arr);
}
