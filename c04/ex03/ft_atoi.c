#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] <= 13 && str[i] >= 9))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while(str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 +(str[i] - '0');
		i++;
	}
	return (res * neg);
}

int main (void)
{
	printf("%d", ft_atoi("+-1234"));;
	return (0);
}	
