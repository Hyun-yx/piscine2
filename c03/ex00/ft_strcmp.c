#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((s1[i] == s2[j]) && (s1[i] != '\0'))
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

int	main(void)
{
	char	s1[] = "i hate rush01";
	char	s2[] = "i hate rushoi";

	char	s3[] = "quesera";
	char	s4[] = "quesera";

	printf("diff = %d\n", ft_strcmp(s1, s2));
	printf("same = %d\n", ft_strcmp(s3, s4));
	return (0);
}
