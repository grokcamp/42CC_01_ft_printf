/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_tester_please_delete.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:39 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/22 15:50:40 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is exclusively a format tester file, DELETE BEFORE GIT PUSH!!! //

#include <stdio.h>

// pct test

/*
int	main(void)
{
	printf("\"%%\"", 0x11);
	return (0);
}*/


// numconv test

/*
int	main(void)
{
	int	val = 42;
	int	*ptr = &val;

	printf("Pointer value: %i\n", *ptr);
	printf("Pointer address: %p\n", (void *)ptr);
	printf("Pointer address converted to decimal: %ld\n", (long)ptr);
	return (0);
}
*/

//null test
/*
int	main(void)
{
	char	*str = 0;

	printf("\n%d", printf("%s", str));
}
*/

// flag count test
/*
int	main(void)
{
	int	val = 42;

	printf("\n%d", printf("%+10d", val));
}
*/

// precision test
/*
int	main(void)
{
	printf("%.0d", 0);
}
*/

// hex test
/*
int	main(void)
{
	printf("% #x", 17);
}
*/

// + test

int	main(void)
{
	printf("%+x", 42);
}
