/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prukngan <phongsathon.rak2003@gmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 04:40:23 by prukngan          #+#    #+#             */
/*   Updated: 2023/04/08 04:40:23 by prukngan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  while (*s != c && *s)
    s++;
  if (*s == c)
    return ((char *)s);
  return (NULL);
}

// int main()
// {
//   char *str = "kowoat";
//   char c = 'a';
//   char *s1 = strrchr(str, c);
//   char *s2 = ft_strrchr(str, c);
  
//   printf("s1 : %s\n", s1);
//   printf("s2 : %s\n", s2);
// }
