#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("empty = %d\n", ft_str_is_lowercase(""));
	printf("lowcase = %d\n", ft_str_is_lowercase("abcxyz"));
	printf("lowupcase = %d\n", ft_str_is_lowercase("abcXYZ"));
	printf("lowcaseint = %d\n", ft_str_is_lowercase("abc123"));
	printf("int = %d\n", ft_str_is_lowercase("123"));
	return (0);
}
