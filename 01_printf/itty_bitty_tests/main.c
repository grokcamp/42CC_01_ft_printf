// #include "./includes/ft_printf.h"
#include "./includes/ft_printf_bonus.h"

int main()
{
    char str[] = "";
    // mandatory tests
    printf("*****MANDATORY TESTS*****\n\n");

    ft_printf("ft_printf == %d\n", ft_printf("%s, %%, %d, %x, %X, %u, %c, %i, %p\n", "coucou paris", 42, 42, -1, -1, 'a', 25, str));
    printf("printf == %d\n", printf("%s, %%, %d, %x, %X, %u, %c, %i, %p\n", "coucou paris", 42, 42, -1, -1, 'a', 25, str));
    ft_printf("ft_printf == %d\n", ft_printf("%sssss\n", "coucou paris"));
    printf("printf == %d\n", printf("%sssss\n", "coucou paris"));
    ft_printf("ft_printf == %d\n", ft_printf("%syyyyyy\n", "coucou paris"));
    printf("printf == %d\n", printf("%syyyyyy\n", "coucou paris"));

    // bonus tests
    printf("\n*****BONUS TESTS*****\n\n");
    ft_printf("ft_printf == %d\n", ft_printf("%#x\n", 15));
    printf("printf == %d\n", printf("%#x\n", 15));
    ft_printf("ft_printf == %d\n", ft_printf("%#X\n", 15));
    printf("printf == %d\n", printf("%#X\n", 15));
    ft_printf("ft_printf == %d\n", ft_printf("%+d\n", 15));
    printf("printf == %d\n", printf("%+d\n", 15));
    ft_printf("ft_printf == %d\n", ft_printf("% d\n", 15));
    printf("printf == %d\n", printf("% d\n", 15));
    // if you combine + and ' ', you will receive a compilation error as expected

    // empty test
    printf("\n*****EMPTY TEST*****\n\n");
    fflush(0);  //empties std buffer if no \n
	printf("printf == %d\n", printf(NULL));    // returns nothing
    fflush(0); 
    ft_printf("ft_printf == %d\n", ft_printf(NULL));    // returns nothing

    // null tests
    printf("\n*****NULL TESTS*****\n\n");
    fflush(0);  //empties std buffer if no \n
    char c = 0;
	printf("printf == %d\n", printf("%c", c));    // returns nothing
    fflush(0); 
    ft_printf("ft_printf == %d\n", ft_printf("%c", c));    // returns nothing
	char *s = 0;
	printf("printf == %d\n", printf("%s\n", s));  // returns "(null)"
    fflush(0);
    ft_printf("ft_printf == %d\n",ft_printf("%s\n", s));  // returns "(null)"
	void *ptr = 0;
	printf("printf == %d\n", printf("%p\n", ptr));  // returns "(nil)"
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%p\n", ptr));  // returns "(nil)"
	printf("printf == %d\n", printf("%d\n", '\0')); // returns 0
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%d\n", '\0')); // returns 0
	printf("printf == %d\n", printf("%i\n", '\0')); // returns 0
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%i\n", '\0')); // returns 0
	printf("printf == %d\n", printf("%u\n", '\0')); // returns 0
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%u\n", '\0')); // returns 0
	printf("printf == %d\n", printf("%x\n", '\0')); // returns 0
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%x\n", '\0')); // returns 0
	printf("printf == %d\n", printf("%X\n", '\0')); // returns 0
    fflush(0);
    ft_printf("ft_printf == %d\n", ft_printf("%X\n", '\0')); // returns 0
}