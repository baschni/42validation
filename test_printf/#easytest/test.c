/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baschnit <baschnit@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:10:37 by baschnit          #+#    #+#             */
/*   Updated: 2024/11/08 13:25:05 by baschnit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"
#include "limits.h"

int	main(void)
{
	int		ret1;
	int		ret2;
	char	*format;

	format = "%- 1.0d, %- 1.0d, %- 1.0d, %- 1.0d, %- 1.0d, %- 1.0d, %- 1.0d, %- 1.0d %02.5i";
	puts(format);
	printf("\n===== my =======\n");
	ret1 = ft_printf(format, 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX, 12);
	printf("\n===== orig =======\n");
	ret2 = printf(format, 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX, 12);
	printf("\n=======\n");
	printf("\n%i %i\n", ret1, ret2);
}
