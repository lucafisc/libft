
#include "libft.h"


char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    char *pt;
    int i;
    len = ft_strlen(s) + 1;
    pt = malloc(sizeof(char) * len);
    if (!pt)
        return (0);
    i = 0;
    while (s[i])
    {
        pt[i] = f(i, s[i]);
        i++;
    }
    pt[i] = '\0';
    return (pt);
}

// char fun_function(unsigned int i, char c)
// {
//     return (c + i);
// }

// int main()
// {
//     char my_str[] = "Hdjik";
//     char *pt;
//     pt = ft_strmapi(my_str, fun_function);
//     printf("%s", pt);
// }