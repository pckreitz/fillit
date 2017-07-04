/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:42:42 by pmoran            #+#    #+#             */
/*   Updated: 2016/10/20 03:41:15 by pmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *s1, char *s2)
{
	int i;
	int last;

	i = 0;
	while (s1[i] != 0)
		i++;
	last = i;
	while (s2[i - last] != 0)
	{
		s1[i] = s2[i - last];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}