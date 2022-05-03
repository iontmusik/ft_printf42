/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorre-s <jtorre-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:12:36 by jtorre-s          #+#    #+#             */
/*   Updated: 2022/04/18 16:24:59 by jtorre-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long n, char *hexa)
{
	int		nbr;

	nbr = 0;
	if (n >= 16)
		nbr += ft_hexa(n / 16, hexa);
	if (n || (n == 0 && nbr == 0))
	nbr += ft_putchar(hexa[n % 16]);
	return (nbr);
}
