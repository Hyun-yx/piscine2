#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0')&&(str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("empty = %d\n", ft_str_is_numeric(""));
	printf("int only = %d\n", ft_str_is_numeric("0123456789"));
	printf("cont otr char = %d\n", ft_str_is_numeric("012abc"));
	return (0);
}
