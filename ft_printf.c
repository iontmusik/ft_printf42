/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:53:24 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/20 20:22:32 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		i;
	int		j;

	j = 0;
	i = 0;
	va_start (lst, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
				j += write(1, "%%", 1);
			else
				j += ft_variables(s[i], lst);
		}
		else
			j += write(1, &s[i], 1);
		i++;
	}
	va_end(lst);
	return (j);
}

int	main(void)
{
	int		a;
	int		b;
	char	*c;
	char 	z;

	z = 'r';
	b = printf("numero:  %p\n, %d", c, -2147483648);
	a = ft_printf("numero:  %p\n, %d", c, -2147493648);
	printf("mio: %d\nsuyo: %d", b, a);
}
