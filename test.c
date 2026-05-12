/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msars <msars@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:51:01 by msars             #+#    #+#             */
/*   Updated: 2026/05/12 18:57:59 by msars            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	ft_printf("Hello world!\n");
	ft_printf("Donald's nephews are: %s, %s, and %s.\n", "Huey", "Dewey", "Louie");
	ft_printf("Answer to the Ultimate Question of Life, the Universe, and Everything: %d!\n", 42);
	ft_printf("%d%% %c %c %c\n", 100, 'a', 'b', 'c');
}
