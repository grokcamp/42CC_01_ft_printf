#include "./includes/ft_printf.h"

int main()
{
    char str[] = "";
   ft_printf("printf == %d\n", ft_printf("%s, %%, %d, %x, %X, %u, %c, %i, %p\n", "coucou paris", 42, 42, -1, -1, 'a', 25, str));
    printf("printf == %d\n", printf("%s, %%, %d, %x, %X, %u, %c, %i, %p\n", "coucou paris", 42, 42, -1, -1, 'a', 25, str));
    ft_printf("printf == %d\n", ft_printf("%sssss\n", "coucou paris"));
    printf("printf == %d\n", printf("%sssss\n", "coucou paris"));
    ft_printf("printf == %d\n", ft_printf("%syyyyyy\n", "coucou paris"));
    printf("printf == %d\n", printf("%syyyyyy\n", "coucou paris"));

    ft_printf("printf == %d\n", ft_printf("%#x\n", 15));
    printf("printf == %d\n", printf("%#x\n", 15));
    ft_printf("printf == %d\n", ft_printf("%+d\n", 15));
    printf("printf == %d\n", printf("%+d\n", 15));


    //ft_printf("d == %d et x == %x \n",1, 42);
printf("////////////////////////////////////other test//////////////\n");
    char c = 0;
	printf("%d\n", printf("%c", c));    // returns nothing
    ft_printf("%d\n", ft_printf("%c", c));    // returns nothing

	char *s = 0;
	printf("%d\n", printf("%s\n", s));  // returns "(null)"
    ft_printf("%d\n",ft_printf("%s\n", s));  // returns "(null)"
	void *ptr = 0;
	printf("%d\n", printf("%p\n", ptr));  // returns "(nil)"
    fflush(0);//empties std buffer if no \n
    ft_printf("%d\n", ft_printf("%p\n", ptr));  // returns "(nil)"
	printf("%d\n", printf("%d\n", '\0')); // returns 0
    fflush(0);
    ft_printf("%d\n", ft_printf("%d\n", '\0')); // returns 0
	printf("%d\n", printf("%i\n", '\0')); // returns 0
    fflush(0);
    ft_printf("%d\n", ft_printf("%i\n", '\0')); // returns 0
	printf("%d\n", printf("%u\n", '\0')); // returns 0
    fflush(0);
    ft_printf("%d\n", ft_printf("%u\n", '\0')); // returns 0
	printf("%d\n", printf("%x\n", '\0')); // returns 0
    fflush(0);
    ft_printf("%d\n", ft_printf("%x\n", '\0')); // returns 0
	printf("%d\n", printf("%X\n", '\0')); // returns 0
    fflush(0);
    ft_printf("%d\n", ft_printf("%X\n", '\0')); // returns 0
}