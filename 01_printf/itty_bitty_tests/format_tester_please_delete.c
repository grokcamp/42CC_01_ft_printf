/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_tester_please_delete.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:39 by gcampbel          #+#    #+#             */
/*   Updated: 2024/03/24 01:25:08 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is exclusively a format tester file, DELETE BEFORE GIT PUSH!!! //

#include <stdio.h>

// null test
/*
int	main(void)
{
	//char c = 0;
	//printf("%c", c);    // returns nothing
	//char *str = 0;
	//printf("%s", str);  // returns "(null)"
	//void *ptr = 0;
	//printf("%p", ptr);  // returns "(nil)"
	//printf("%d", '\0'); // returns 0
	//printf("%i", '\0'); // returns 0
	//printf("%u", '\0'); // returns 0
	//printf("%x", '\0'); // returns 0
	//printf("%X", '\0'); // returns 0
	return (0);
}
*/


// pct test
/*
int	main(void)
{
	printf("\"%%\"", 0x11);
	return (0);
}
*/


// numconv test
/*
int	main(void)
{
	int	val = 42;
	int	*ptr = &val;

	printf("Pointer value: %i\n", *ptr);
	printf("Pointer address: %p\n", (void *)0);
//	printf("Pointer address converted to decimal: %ld\n", (long)ptr);
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

int	main(void)
{
	printf("%#x", 1);
}


// + test
/*
int	main(void)
{
	printf("%+x", 42);
}*/
