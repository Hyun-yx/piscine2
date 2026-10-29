#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	rev(char *str)
{
	int	j;

	j = ft_strlen(str);
	while (j >= 0)
	{
		write(1, &str[j], 1);
		j--;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	rev(av[1]);
	write(1, "\n", 1);
	return (0);
}
