/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_tester_please_delete.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:39 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/15 19:38:59 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is exclusively a format tester file, DELETE BEFORE GIT PUSH!!! //

#include <stdio.h>
/*
int	main(void)
{
	printf("\"%%\"", 0x11);
	return (0);
}*/

int	main(void)
{
	int	val = 42;
	int	*ptr = &val;

	printf("Pointer value: %i\n", *ptr);
	printf("Pointer address: %p\n", (void *)ptr);
	printf("Pointer address converted to decimal: %ld\n", (long)ptr);
	return (0);
}
