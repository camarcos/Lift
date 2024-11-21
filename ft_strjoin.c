/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:06:19 by camarcos          #+#    #+#             */
/*   Updated: 2024/04/18 11:56:06 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ptr = ft_calloc(((s1len + s2len) + 1), sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_strlcat(ptr, s1, s1len + 1);
	ft_strlcat(ptr, s2, s2len + s1len + 1);
	{
		return (ptr);
	}
}
/*
int main()
{
	char *str1 = "Hello ";
	char *str2 = "World";
	printf("%s\n", ft_strjoin(str1, str2));
	return 0;
}
*/
//concatena dos cadenas en una nueva cadena(ptr) 
