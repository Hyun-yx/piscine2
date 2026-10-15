#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int     main(void)
{
	printf("empty = %d\n", ft_str_is_lowercase(""));
	printf("upcase = %d\n", ft_str_is_lowercase("ABCXYZ"));
	printf("uplowcase = %d\n", ft_str_is_lowercase("ABCxyz"));
	printf("upcaseint = %d\n", ft_str_is_lowercase("ABC123"));
	printf("int = %d\n", ft_str_is_lowercase("123"));
	return (0);
}
